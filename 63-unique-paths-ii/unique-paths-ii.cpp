class Solution {
public:
int solve(vector<vector<int>>& matrix,int i,int j,vector<vector<int> >& dp){
    int n= matrix.size();
    int m= matrix[0].size();
    if(i>n-1||i<0||j>m-1||j<0||matrix[i][j]==1)return 0;
    if((i==n-1&&j==m-1)&&matrix[n-1][m-1]!=1)return 1;
    if(dp[i][j]!=-1)return dp[i][j];
    matrix[i][j]=1;
   
      int ans = solve(matrix,i,j+1,dp)
      +solve(matrix,i+1,j,dp);

    matrix[i][j]=0;
    dp[i][j]=ans;
   return dp[i][j];
}

    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        int n = o.size();
        int m = o[0].size();
        vector<vector<int> > dp(n,vector<int>(m,-1));
        return solve(o,0,0,dp);
    }
};