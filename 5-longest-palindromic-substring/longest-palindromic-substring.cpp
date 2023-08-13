class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==1)return s;
        int n=s.size();
        int st=0,maxlen=1;
        int end=0;
        string ans="";
        for(int i=0;i<n;i++){
            int j=i,k=i;
            string a=solve(j,k,n,s);
            string b=solve(j,k+1,n,s); 
            if(maxlen<a.size()){
                maxlen=a.size();
                ans=a;
            }
            if(maxlen<b.size()){
                maxlen=b.size();
                ans=b;
            }
        } 
        if(ans.size()==0){return s.substr(0,1);}
        return ans;
    }
    string solve(int j,int k,int n,string s){
        while(j>=0&&k<n){
                if(s[j]==s[k]){
                    j--;
                    k++;
                }
                else break;
            }
             return s.substr(j+1,k-j-1);
    }
};