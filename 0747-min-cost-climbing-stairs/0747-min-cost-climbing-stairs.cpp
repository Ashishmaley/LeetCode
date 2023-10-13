class Solution {
public:
int solve(vector<int>&cost,int n,vector<int>&v){
    if(n==0||n==1){
        return cost[n];
    }
    if(v[n]!=-1)return v[n];
    v[n]=min(solve(cost,n-1,v),solve(cost,n-2,v))+cost[n];
    return v[n];
}
    int minCostClimbingStairs(vector<int>& arr) {
        int n= arr.size();
        vector<int>v(n+1,-1);
        int ans=(min(solve(arr,n-1,v),solve(arr,n-2,v)));
        return ans;
    }
};