class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int second=n-1, zero=0;
        for (int i=0; i<n; i++) {
            while (nums[i]==2 && i<=second) swap(nums[i], nums[second--]);
            while (nums[i]==0 && i>=zero ) swap(nums[i], nums[zero++]);
        }
    }
};

// 2 time counting sort is not best
// 2 last , 0 first , 1 mid
// Runtime: 3 ms