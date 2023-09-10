class Solution {
public:
    long long result=1;
    long long mod=1e9+7;
    vector<long long>memo;
    long long cal(long long rem){
        if(rem==0)return 1;
        if(memo[rem]!=-1)return memo[rem];
        long long curr=cal(rem-1)*(2*rem-1)*rem%mod;
        return memo[rem]=curr;
    }
    int countOrders(int n) {
        memo.resize(n+1,-1);
        return cal(n);
    }
};