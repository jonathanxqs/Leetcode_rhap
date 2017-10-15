class Solution {
public:
  
    int climbStairs(int n) {
        int a = 1, b = 1;
        // n = 1 rt 1 n=2 rt2
        while (n--){
            (b += a) ;
            a = b-a ;
        }

            


        return a;
    }
};