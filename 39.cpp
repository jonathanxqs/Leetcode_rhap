class Solution {
public:
    std::vector<std::vector<int> > combinationSum(std::vector<int> &candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        std::vector<std::vector<int> > res;
        std::vector<int> combination;

        combinationSum(candidates, target, res, combination, 0);
        return res;
    }

private:

    /*
        @param : candidates , res return , combination already in , begin start point
         
     */
    void combinationSum(const std::vector<int> &candidates , int target, std::vector<std::vector<int> > &res, std::vector<int> &combination, int begin) {

        if (!target) {
            res.push_back(combination);
            return;
        }

        for (int i = begin; i != candidates.size() && target >= candidates[i]; ++i) { 
            combination.push_back(candidates[i]);
            combinationSum(candidates, target - candidates[i], res, combination, i);
            combination.pop_back();
        }
    }
};