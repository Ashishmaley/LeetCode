class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        return solve(prices,0,1,dp);
    }
    int solve(vector<int>& prices,int index,int buy,vector<vector<int>>&dp){
        if(index==prices.size())return 0;
        if(dp[index][buy]!=-1)return dp[index][buy];
        int ans = 0;

        if(buy){
            int buy = (-prices[index]+solve(prices,index+1,false,dp));
            int wait = solve(prices,index+1,true,dp);
            ans = max (buy,wait);
        }
        else{
            int sell = prices[index]+solve(prices,index+1,true,dp);
            int wait = solve(prices,index+1,false,dp);
            ans = max(sell,wait);
        } 
        return dp[index][buy] = ans;
    }
};