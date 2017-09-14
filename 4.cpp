class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> v;
        int i=0,j=0;
        while (i<nums1.size() or j< nums2.size() ){
            if (nums1[i] <= nums2[j]){
                
                
                i++;
            }
        }


    }
};