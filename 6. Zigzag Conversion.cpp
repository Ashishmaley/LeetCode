class Solution {
public:
    string convert(string s, int r) {
        if(r==1||r>s.length())
        return s;
        string ans="";
        for(int i=0;i<r;i++){
            int incr=2*(r-1);
            for(int j=i;j<s.length();j+=incr)
            {
                ans+=s[j];

                if(i>0&&i<r-1&&j+incr-2*i<s.length())
                ans+=s[j+incr-2*i];
            }
        }
            return ans;

    }
        
    
};
