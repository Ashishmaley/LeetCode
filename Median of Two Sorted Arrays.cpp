class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans=0.0;
        for( auto i=0;i<nums2.size();i++)
        nums1.push_back(nums2[i]);
        sort(nums1.begin(),nums1.end());   
        int n=nums1.size();
        if(n%2==0){
        // cout<<nums1[n/2-1]<<""<<nums1[n/2];
        ans=((nums1[n/2-1])+ (nums1[n/2]));
        ans=ans/2;}
        else{
            ans=nums1[n/2];
        }
        return ans;
    }
};
