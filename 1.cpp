class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end() );
        std::map<int, int> maps;
        vector<int> ans1;

        int i=0;
        for (auto s1: nums){
            maps[s1] = i;
            i++ ;

        }

        i=0;
        for (auto s1: nums){
            if ( ( maps.find(target - s1) != maps.end() ) && maps[target - s1] != i ) {
                int j = maps[target - s1];
                cout << maps[s1] << j << endl;
                ans1.push_back(i);
                ans1.push_back(j);
                return ans1;
            }
            i++ ;

        }

        return ans1;
    }
};