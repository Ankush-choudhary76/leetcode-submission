class Solution {
public:
    string toHex(int num) {
        if (!num) return "0";
        unsigned int it = num;

        string res;
        string hex = "0123456789abcdef";

        while (it) {
            res += hex[it % 16];
            it /= 16;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};