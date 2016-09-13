class Solution {

public:
    
    int lengthOfLongestSubstring(string s) {

        int n = s.length(), ans = 0;
        
        map<char, int> map; // current index of character
        
        int j=0,i=0;
        // try to extend the range [i, j]
        for (j = 0, i = 0; j < n; j++) {
            if (map.find(s[j]) !=map.end()) {
                i = max(map[s[j]], i);
            }
            
            ans = max(ans, j - i + 1);
            map[s[j+1]]= j + 1;
        }
        return ans;
    }
};