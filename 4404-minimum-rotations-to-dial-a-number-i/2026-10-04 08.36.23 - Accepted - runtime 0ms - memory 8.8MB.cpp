class Solution {
public:
    int minRotations(string s) {
       int ans = 0;
        int cur = 0;

        for (auto it  : s) {
            int n = it - '0';

            int diff = abs(cur - n);

            ans += min(diff, 10 - diff);

            cur = n;
        }

        return ans; 
    }
};