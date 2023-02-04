class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        int v;
        for(int i=0;i<nums.size();i++)
        {    v=nums[i];
         stack<int>s;
        while(v>0)
            { 
            s.push(v%10);
            v=v/10;
            
        }
         while(!s.empty())
         {
             ans.push_back(s.top());
             s.pop();
         }
    }
        return ans;
  }
};
