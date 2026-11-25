class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
         long long xor2 = 0;
        for (int x : nums) xor2 ^= x;

        long long diff = xor2 & -xor2;  // safe negation

        int a = 0, b = 0;
        for (int x : nums) {
            if (x & diff)
                a ^= x;
            else
                b ^= x;
        }

        return {a, b};
    }
};