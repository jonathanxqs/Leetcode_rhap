class Solution {
public:

    vector<vector<int> > permuteUnique(vector<int> &num) {
        vector<vector<int>> v;
        vector<int> r;
        map<int, int> maps;
        for (int i : num)
        {
            if (maps.find(i) == maps.end()) maps[i] = 0;
            maps[i]++;
        }

        permuteUnique(v, r, maps, num.size());
        return v;
    }

    void permuteUnique(vector<vector<int>> &v, vector<int> &r, map<int, int> &map, int n){
        if (n <= 0) //  r full
        {
            v.push_back(r);
            return;
        }

        for (auto &p : map)
        {
            if (p.second <= 0) continue;
            p.second--;
            r.push_back(p.first);
            permuteUnique(v, r, map, n - 1);
            r.pop_back();
            p.second++;
        }
    }
};