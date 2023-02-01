class Solution {
public:
    int maximumCount(vector<int>& v) {
        int j=v.size(),ans=0,pos=0,neg=0;
        if(v[j-1]<=-1||v[0]>=1)
            return j;
        for(int i=0;i<j;i++)
        {
         if(v[i]>0)
            {
             pos++;
         }
            else if (v[i]<0)
                neg++;   
        }
        ans=max(pos,neg);
        return ans;
    }
};
