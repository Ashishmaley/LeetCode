class Solution {
    int[][]dp;
    int solve(String s1,String s2,int i,int j){
        if(i<0||j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=0;
        if(s1.charAt(i)==s2.charAt(j)){
            ans=1+solve(s1,s2,i-1,j-1);
        }else
        {
            ans = Math.max(solve(s1,s2,i-1,j),solve(s1,s2,i,j-1));
        }
        dp[i][j]=ans;
        return dp[i][j];
    }

    public int longestCommonSubsequence(String t1, String t2) {
        int n=t1.length()-1,
        m=t2.length()-1;
        dp=new int[n+1][m+1];
        for(int i=0;i<dp.length;i++){
            Arrays.fill(dp[i],-1);
        }
        return solve(t1,t2,n,m);
    }
}