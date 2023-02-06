class Solution {
public:
    int distinctPrimeFactors(vector<int>& num) {
        vector<int>ans;
        int i, j, flag;
    for (i = 2; i <= 1001; i++) {
        
        flag = 1;

        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            ans.push_back(i);
    }
        int count=0;
        set<int>s;
        for(int i=0;i<num.size();i++)
       {      int l=0,n=num[i];
              while(n>1)
               {
                 while(n>1&& l<ans.size()&&(n%ans[l])==0)
                 {
                     s.insert(ans[l]);
                     n=n/ans[l];
                 }
                 l++;
               }
            
       }
        return s.size();
    }
};
