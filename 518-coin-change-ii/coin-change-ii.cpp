#define ll long long
class Solution {
public:
int solve(vector<int>&coins,ll amount,int index,vector<vector<int> >& dp ){
    if(amount==0){
        return 1;
    }
    if(index==coins.size())return 0;
    if(amount<0){
        return 0;
    }
    if(dp[index][amount]!=-1){
        return dp[index][amount];
    }
    int include =  solve(coins,amount-coins[index],index,dp);
    int exclude =  solve(coins,amount,index+1,dp);
    dp[index][amount]=include+exclude;
    return dp[index][amount];
}

    int change(int amount, vector<int>& coins) {
        vector<vector<int> > dp(coins.size()+1,vector<int>(amount+1,-1));
        int ans=solve(coins,static_cast<ll>(amount),0,dp);
        return ans;
    }
};