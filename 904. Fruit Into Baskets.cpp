class Solution {
public:
    int totalFruit(vector<int>& f) {
        int ans=0,count=0;
        int i=0,j=0,n=f.size();
        map<int,int>m;
       for( i=0,j=0;j<n;j++)
       {
           m[f[j]]++;
           if(m.size()>2)
           {
               while(m.size()>2)
               {
                   m[f[i]]--;
                   if(m[f[i]]==0)
                   m.erase(f[i]);
                   i++;
               }
           }
           ans=max(ans,j-i+1);

       }
        return ans;
    }
};
