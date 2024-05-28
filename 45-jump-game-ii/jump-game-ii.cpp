class Solution {
public:

    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return solve(0, n, nums,dp);
    }
    int solve(int index, int n, vector<int>& nums,vector<int>& dp){
       if(index>=n-1){
        return 0;
       }
       if(index>=n)return 100000;
       if(dp[index]!=-1)return dp[index];
       if(nums[index]==0)return 100000;
       int ans = 100000;

       for(int i=1;i<=nums[index];i++){
        int mini = 1 + solve(index+i,n,nums,dp);
        ans = min(mini,ans);
       }
       dp[index]=ans;
       return dp[index];
    }
};