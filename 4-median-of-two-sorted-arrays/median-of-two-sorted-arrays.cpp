class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans = 0.0;
        vector<int> v;
        int i = 0, j = 0;
        int n = nums1.size() + nums2.size();
        
        while (n--) {
            if (i < nums1.size() && (j >= nums2.size() || nums1[i] <= nums2[j])) {
                v.push_back(nums1[i]);
                i++;
            } else {
                v.push_back(nums2[j]);
                j++;
            }
        }

        int size = v.size();
        if (size % 2 == 0) {
            ans = (v[size / 2 - 1] + v[size / 2]) / 2.0;
        } else {
            ans = v[size / 2];
        }

        return ans;
    }
};