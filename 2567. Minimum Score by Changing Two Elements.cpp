class Solution {
public:
    int minimizeSum(vector<int>& v) {
        if(v.size()<3)
            return 0;
        int n=v.size();
        sort(v.begin(),v.end());
        int B=v[n-1]-v[2];
        int C=v[n-3]-v[0];
        int A=v[n-1]-v[0]; 
        int D=v[n-2]-v[1];
        int ans= min(min(A,B),min(C, D));
        return ans;
    }
};
