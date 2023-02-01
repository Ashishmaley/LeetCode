class Solution {
public:
    int alternateDigitSum(int n) {
        int a=0, ans=0,l=0;
        char c='+';
        stack<int>s;
        while(n!=0){
            a=n%10;
            n=n/10;
            s.push(a);
        }
        while(!s.empty())
        {
            
          l=s.top();
            if(c=='+')
            {ans+=l;
            c='-';}
            else
            {    ans-=l;
            c='+';}
            s.pop();
        }
        return ans;
    }
};
