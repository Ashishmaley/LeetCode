class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        if(strs.size()==1)
        return strs[0];
        for(int i=0;i<strs[0].size();i++){
            bool flag=true;
            for(int j=0;j<strs.size()-1;j++){
                if(strs[j][i]!=strs[j+1][i]){
                    flag=false;
                }
            }
            if(flag){
                ans+=strs[0][i];
            }
            else {
                break;
            }
        }
        return ans;
    }
};