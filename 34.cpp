

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0, j = n - 1;

        vector<int> ret(2, -1);
        if (n==0) return ret;
        
        // Search for the left one
        while (i < j)
        {
            int mid = (i + j) /2;
            if (nums[mid] < target) i = mid + 1;
            else j = mid;
        }
        if (nums[i]!=target) return ret;
        else ret[0] = i;
        
        // Search for the right one
        j = n-1;  // We don't have to set i to 0 the second time.
        while (i < j)
        {
            int mid = (i + j) /2 + 1;   // Make mid biased to the right
            if (nums[mid] > target) j = mid - 1;  
            else i = mid;               // So that this won't make the search range stuck.
        }
        ret[1] = j;
        return ret; 
    }
};