class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int si=INT_MAX;
        for(auto s : strs){
            si= min(si,(int)s.size());
        }
        int count=0;
        for(int i=0;i<si;i++){
            char ch = strs[0][i];
            bool flag=false;
            for(int j=0;j<strs.size();j++){
                if(ch!=strs[j][i]) flag = true;
            }
            if(flag)break;
            count++;
        }
        return (count==0) ? "" : strs[0].substr(0,count);
    }
};