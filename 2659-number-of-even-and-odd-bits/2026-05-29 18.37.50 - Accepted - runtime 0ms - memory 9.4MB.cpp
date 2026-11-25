class Solution {
public:
    vector<int> evenOddBit(int n) {
         int ev = 0, odd = 0;
        int id = 0;

        while (n > 0) {
            if (n & 1) {
                if (id % 2 == 0)
                    ev++;
                else
                    odd++;
            }

            n >>= 1;
            id++;
        }

        return {ev, odd};
    }
};