class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        if(n<1)return 0;
        int i=0,j=n-1;
        while(i<=j){
            if(nums[i]==val){
                while(j>=0&&nums[j]==val){
                    j--;
                    }
                if(i<j&&nums[j]!=val){
                    nums[i]=nums[j];
                    j--;
                }
            }
            else{    
                i++;
                }
        }
        return i;   
    }
};