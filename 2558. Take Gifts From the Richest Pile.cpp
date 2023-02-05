// int floorSqrt(int x)
// {
//     // Base cases
//     if (x == 0 || x == 1)
//         ans+=x;
//     // Starting from 1, try all numbers until
//     // i*i is greater than or equal to x.
//     else{
//     int i = 1, result = 1;
//     while (result <= x) {
//         i++;
//         result = i * i;
//        }
//       ans+=i-1;
//     }
//     return ans;
// }

class Solution { 
public:
    long long pickGifts(vector<int>& v, int k) {
        priority_queue<int>p;
        long long ans=0;
        for(int i=0;i<v.size();i++)
        {
            p.push(v[i]);
        }
        // if(p.top()==1||p.top()==0)
        //     { 
        //     ans+=k;
        //     }
        // else{
         for(int i=0;i<k;i++)
         {  
          
            int a=sqrt(p.top());
            p.pop();
            p.push(a);
          }
        
        while(!p.empty())
        {
            ans+=p.top();
            p.pop();
        }
        // }
        return ans;
    }
};
