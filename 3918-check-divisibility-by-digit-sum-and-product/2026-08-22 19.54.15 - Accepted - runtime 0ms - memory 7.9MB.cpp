class Solution {
public:
    bool checkDivisibility(int n) {
        int a = n;
        int sum = 0, mul = 1;

        while (n) {
            int val = n % 10;

            sum += val;
            mul *= val;

            n /= 10;
        }

        int ans = sum + mul;

        return a % ans == 0;
    }
};