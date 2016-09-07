class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ret;
        ret.push_back(0);
        for(int i = 1; i <= num; i++)
        {
            int bits = ret[i >> 1] + (i & 1);
            ret.push_back(bits);
        }
        return ret;
    }
};