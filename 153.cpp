class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0 , r = nums.size()-1;
        int mid = 0;

        // 4 5 6 7m 8 0 1 2
        while (l<r){
            mid = (l+r)/2;
            if (nums[l]<nums[r]) return nums[l];

            if (nums[mid]<nums[r])
            r = mid;     
            else l = mid+1;
        }

        return nums[l];
    }
};