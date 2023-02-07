class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
     //    map<char,int>c;
     //    map<char,int>k;
       vector<int>c(26,0);
       vector<int>k(26,0);
       vector<int>ans;
       int n=p.size();
       if(s.size()<n)
       return {};
       for(int i=0;i<n;i++)
       {
           c[p[i]-'a']++;
           k[s[i]-'a']++;
       }
       if(c==k)
       ans.push_back(0);
     //    map<char,int>k(c);
       for(int i=n;i<s.size();i++)
        {
            k[s[i-n]-'a']--;
            k[s[i]-'a']++;

          if(k==c)
          ans.push_back(i-n+1);
        }
        if(ans.empty())
        return {};
        return ans;
    }
};
