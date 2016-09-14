class Solution {

public:
    
    int lengthOfLongestSubstring(string s) {

        int n = s.length(), ans = 0;
        // cout << n <<endl;
        map<char, int> map; // current index of character
        
        int j=0,i=0;
        // try to extend the range [i, j]

        for (j = 0, i = 0; j < n; j++) {
        	// cout<<i<<" "<<j<<" "<<s[j]<<" count s[j]=="<<map.count(s[j])<<endl;

            if (map.count(s[j]) ) {
            	//exsit
                i = max(map[s[j]]+1, i);
                //duplicate changed
            }


            ans = max(ans, j - i + 1);
            map[s[j]]= j;
            // cout<<i<<" "<<j<<" "<<s[j]<<endl;

        }

        return ans;
    }
};

 // 86 ms