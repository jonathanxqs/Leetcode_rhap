class Solution {
public:
    std::vector<std::vector<int> > combinationSum3(int k, int n) {
        std::vector<std::vector<int> > res;
        std::vector<int> combination;
        combinationSum3(n, res, combination, 1, k);
        return res;
    }
    
private:
    void combinationSum3(int target, std::vector<std::vector<int> > &res, std::vector<int> &combination, int begin, int need) {
        
        // okay , target == 0
        if (!target) {
            res.push_back(combination);
            return;
        }
        else if (!need) // need == 0 , end
            return;

        // i + i+1 + ... + i+need-1
        
        for (int i = begin; i < 10 && target >=   need * (2*i + need - 1) / 2; ++i) {
            combination.push_back(i);
            combinationSum3(target - i, res, combination, i + 1, need - 1);
            combination.pop_back();
        }
    }
};