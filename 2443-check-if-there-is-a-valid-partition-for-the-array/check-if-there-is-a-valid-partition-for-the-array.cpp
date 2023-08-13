class Solution {
public:
    bool solve(vector<int>& nums,int i,vector<int>& dp){
        if(nums.size()==i)return true;
        bool a=false,b=false,c=false;
        if(dp[i]!=-1)return dp[i];
        if((nums.size())-i>1 && nums[i]==nums[i+1])
            {
                a= solve(nums,i+2,dp);
            }

        if((nums.size())-i>2&&
        nums[i]==nums[i+1]&&nums[i+1]==nums[i+2]){
           c=solve(nums,i+3,dp);
        }  

        if((nums.size())-i >2 &&(nums[i]+1==nums[i+1])&&(nums[i]+2==nums[i+2]))
        {
            b= solve(nums,i+3,dp);
        }
        
        dp[i]= (a||b||c);
        return dp[i];
    }
    bool validPartition(vector<int>& nums) {
        int n=nums.size();
        if(n<2)return false;

        vector<int>dp(n,-1);
        return solve(nums,0,dp);
    }
};