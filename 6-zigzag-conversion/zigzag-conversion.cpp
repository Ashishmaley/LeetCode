class Solution {
public:
    string convert(string s, int n) {
        if(n==1||n>s.length())
        return s;
        string ans="";
        bool flag=false;
        vector<string>v(n);
        int i=0;
        for(auto ele:s){
            if(i==0)
            {
                flag=true;
                v[i]+=ele;
                i++;
                continue;
            }
            if(i==n-1){
                flag=false;
                v[i]+=ele;
                i--;
                continue;
            }
            if(flag==true){
                v[i]+=ele;
                i++;
            }
            else{
                v[i]+=ele;
                i--;
            }
        }
        for(auto l:v){
            ans+=l;
        }
        return ans;
    }     
};