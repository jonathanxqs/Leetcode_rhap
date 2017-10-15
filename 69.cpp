class Solution {
public:
    int mySqrt(int x) {
        double dx = x;
        double rt_d = sqrt(dx);
        return (int)rt_d;

    }
};

    long r = x;
    while (r*r > x)
        r = (r + x/r) / 2;
    return r;