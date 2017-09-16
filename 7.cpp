class Solution {
public:
    int reverse(int x) {
        std::vector<int> v;
        int y,i,j,sig;
        long long k = x;
        sig = (k>=0? 1:-1);
        while (k != 0){
            v.push_back(k % 10);
            k = k /10;
        }

        k=0;
        for (auto s = v.begin();s!=v.end();s++){
            k = k *10 + *s;

        }
        k = k *  sig;
        if (k > MAX_INT or k < MIN_INT) return 0;
        return (int)k;




    }
};