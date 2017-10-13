class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0 , r = nums.size();
        int mid = 0;

        // 4 5 6 7m 8 0 1 2
        while (l>r){
            mid = (l+r)/2;
            if (nums[l]<nums[r]) return nums[l];

            if (nums[mid]<nums[r])
            l = mid;     
            else r = mid;
        }

        return nums[mid];
    }
};