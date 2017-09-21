class Solution {
public:
    string convert(string s, int numRows) {
        string s1,s2,s3;

        int len_s = s.length();
        int i=0,i1,i2,i3;
        while(i<len_s){
            if (i<len_s) { s1+=s[i];i++; }
            if (i<len_s) { s2 +=s [i];i++; }
            if (i<len_s) { s3+=s[i];i++ ;}
            if (i<len_s) { s2+=s[i];i++; }

        }

        return s1+s2+s3;
    }
};