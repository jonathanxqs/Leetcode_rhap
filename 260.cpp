class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        std::unordered_map<int,int> maps;
        for (auto i:nums){
            if (maps.find(i) != maps.end()  ){
                maps[i] ++;
            }
            else {
                maps[i] = 1;
            }
        }

        std::vector<int> rt_v;
        for (auto i:nums){
            if (maps[i] == 1  ){
                rt_v.push_back(i);
            }
        }
        return rt_v;
    }
};

class Solution
{
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        // Pass 1 : 
        // Get the XOR of the two numbers we need to find
        int diff = accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());
        // Get its last set bit
        diff &= -diff;

        // Pass 2 :
        vector<int> rets = {0, 0}; // this vector stores the two numbers we will return
        for (int num : nums)
        {
            if ((num & diff) == 0) // the bit is not set
            {
                rets[0] ^= num;
            }
            else // the bit is set
            {
                rets[1] ^= num;
            }
        }
        return rets;
    }
};