class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end() );
        std::map<int, int> maps;
        int i=0;
        for (auto s1: nums){
            maps[s1] = i;
            i++ ;

        }

        int i=0;
        for (auto s1: nums){
            if ( maps[s1] ) = i;
            i++ ;

        }
        
    }
};