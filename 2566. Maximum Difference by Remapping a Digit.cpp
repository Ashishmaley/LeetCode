class Solution {
public:
    int minMaxDifference(int n) {
        vector<int>v;
        while(n>0)
        {
            int a=n%10;
            v.push_back(a);
            n/=10;
        }
        reverse(v.begin(), v.end());
        int first=9,second=0,maxx=0,minn=0,ans=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==9)
                continue;
            else
            {
                first=v[i];
                break;
            }
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
                continue;
            else
            {
                second=v[i];
                break;
            }
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==first)
                maxx=maxx*10+9;
            else
                maxx=maxx*10+v[i];
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==second)
                minn=minn*10+0;
            else
                minn=minn*10+v[i];
        }
       // cout<<minn<<maxx;
        ans=maxx-minn;
        return ans;
    }
};
