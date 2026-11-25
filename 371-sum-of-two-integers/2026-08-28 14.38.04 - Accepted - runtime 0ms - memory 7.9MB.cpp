class Solution {
public:
    int getSum(int a, int b) {
        while(b != 0){

            unsigned carr = (unsigned)(a & b);

            a = a ^ b;
 
            b = carr << 1;
        }

        return a;
    }
};