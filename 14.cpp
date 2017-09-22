class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        int n = strs.size();
        if (n==0) return prefix;
        
        for (int index=0;; prefix+=strs[0][index],index++ )
            for (int i=0;i<strs.size();i++)
                if (index >= strs[i].size() or (i>0 and strs[i][index] != strs[i-1][idx]))
                    return prefix;
        
        return prefix;
        
    }
};