class Solution {
public:

    int solve(int n,int m,vector<vector<int>>&dp){
        if(n<0||m<0)return 0;
        if(dp[n][m]!=-1)return dp[n][m];
        if(n==0&&m==0)return 1;
        dp[n][m] = solve(n-1,m,dp)+solve(n,m-1,dp);
        return dp[n][m];
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int> >dp(m,vector<int>(n,-1));
        return solve(m-1,n-1,dp);
    }
};