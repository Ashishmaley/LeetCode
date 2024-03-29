class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)  {
        vector<int>ans;
        deque<int>dq;
        for(int i=0;i<k;i++){
            while(!dq.empty()&&dq.back()<nums[i]){
                dq.pop_back();
            }
            dq.push_back(nums[i]);
        }
        
        for(int i=k;i<nums.size();i++){
            ans.push_back(dq.front());
            if(nums[i-k]==dq.front()){
                dq.pop_front();
            }
            while(!dq.empty()&&dq.back()<nums[i]){
                dq.pop_back();
            }
            dq.push_back(nums[i]);
        }
        ans.push_back(dq.front());
        return ans;
    }
};