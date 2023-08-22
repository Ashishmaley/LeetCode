class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle==haystack)return 0;
        int n=haystack.size();
        int m=needle.size();
        if(m>n)return -1;
        for(int i=0;i<n-m+1;i++){
            string s=haystack.substr(i,m);
            cout<<s<<endl;
            if(needle==s)return i;
        }
        return -1;
    }
};