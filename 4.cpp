class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> v;
        int i=0,j=0 , len_v = nums1.size() + nums2.size() ;
        while (i<nums1.size() or j< nums2.size() ){
            if (i==nums1.size()) { 
                v.push_back(nums2[j]);                
                j++;
                continue;            
            }
            
            if (j==nums2.size()) {
                v.push_back(nums1[i]);                
                i++;
                continue;     
            }
            
            if (nums1[i] <= nums2[j]){
                v.push_back(nums1[i]);                
                i++;
            }
            else {
                v.push_back(nums2[j]);                
                j++;
            }
            
        }
        
        i = (len_v) / 2;
        j =  ( (int) len_v -1 ) / 2;
        //cout << i << " " << j <<endl;
        
        return (v[i]+v[j])/(double(2.0) );

    }
};