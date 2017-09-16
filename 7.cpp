class Solution {
public:
    int reverse(int x) {
        std::vector<int> v;
        int y,i,j,sig;
        long long k = x;
        sig = (k>=0? 1:-1);

        while (k != 0){
            cout<< k%10 << " ";
            v.push_back(k % 10);
            k = k /10;
        }

        k=0;
        for (auto s = v.begin();s!=v.end();s++){
            k = k *10 + *s;
        }

        // k = k *  sig;
        if (k > INT_MAX or k < INT_MIN) return 0;
        return (int)k;




    }
};