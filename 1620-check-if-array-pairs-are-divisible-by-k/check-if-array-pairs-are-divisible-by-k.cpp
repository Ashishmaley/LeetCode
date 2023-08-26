class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>rem;
        for(auto ele:arr){
            rem[(ele%k+k)%k]++;
        }
        if(rem[0]%2!=0)
        return false;
        int n=rem.size();
        for(int i=1;i<n;i++){
            if(rem[i]!=rem[k-i])
            return false;
        }
        return true;
    }
};