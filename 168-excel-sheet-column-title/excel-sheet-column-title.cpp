class Solution {
public:
    string convertToTitle(int cn) {
        string ans="";
        while(cn>0){
            int rem = (cn-1)%26;
            ans=char('A'+rem)+ans;
            cn=(cn-1)/26;
        }
        return ans;
    }
};