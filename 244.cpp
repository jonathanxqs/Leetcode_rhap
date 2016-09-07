class Solution {
public:
    string reverseString(string s) {
        string l;
        for (int i=s.length()-1;i>=0;i--){
            l.push_back(s[i]);
        }
        return l;
        
    }
};