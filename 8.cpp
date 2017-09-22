class Solution {
public:
    int myAtoi(string str) {
        int i,j,k;
        long long rt_l = 0;
        int sig =1 ;
        
        int len_s = str.length;
        i = 0;
        while (i<len_s && str[i]==' ') i++;
        if (str[i] == '-') { sig = -1; i++; }
        else if (str[i] == '+'){ sig = 1; i++;} 
        
        while (i<len_s and str[i]<='9' and str[i]>='0'){
            rt_l *= 10;
            rt_l += str[i]-'0';
            i++;
        }
        
        return rt_l;
        
        
    }
};