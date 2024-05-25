class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return solve(nums, 0,dp);
    }

private:
    int solve(vector<int>&nums, int index,vector<int>&dp) {
        if (index >= nums.size() - 1) {
            return 1; 
        }
        if (nums[index] == 0) return 0;
        if(dp[index]!=-1)return dp[index];

        for (int i = 1; i <= nums[index]; i++) {
            if (solve(nums, index + i, dp)) {
                dp[index] = 1;
                return 1;
            }
        }
        
        dp[index] = 0; 
        return 0;
    }
};
