class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
       int ans=nums[0]+nums[1]+nums[2];
       if(ans==target)return target;
       for(int i=0;i<nums.size()-2;i++){
           int j=i+1;
           int k=nums.size()-1;
           while(j<k){
               int l=nums[i]+nums[j]+nums[k];
               if(abs(target-l)<abs(target-ans)){
                   ans=l;
               }
               if(l>target){
                   k--;
               }else if(l<target){
                   j++;
               }else return target;
           }
       }
       return ans; 
    }
};