class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry1 = 1;
        for (auto i=digits.rbegin();i != digits.rend();i++){
            carry1 = ( *i + carry1 );
            *i = carry1 % 10;
            carry1 = carry1 /10;
        }
        if (carry1>0) digits.insert(digits.begin(),carry1);

        return digits;

        // rbegin rend


    }
};