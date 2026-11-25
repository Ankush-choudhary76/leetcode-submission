class Solution {
public:
    int minimumDistance(string word) {
        auto dist = [&](int a, int b) {
            if (a == -1) return 0;
            int x1 = a / 6, y1 = a % 6;
            int x2 = b / 6, y2 = b % 6;
            return abs(x1 - x2) + abs(y1 - y2);
        };

        int n = word.size();
        vector<int> dp(26, 0); 
        int total = 0;

        for (int i = 1; i < n; i++) {
            int cur = word[i] - 'A';
            int prev = word[i - 1] - 'A';

            int d = dist(prev, cur);
            total += d;

            vector<int> temp = dp;

            for (int j = 0; j < 26; j++) {
                    temp[prev] = max( temp[prev],dp[j] + d - dist(j, cur));
            }

            dp = temp;
        }

        int maxi= 0;
        for (auto it  : dp) maxi = max(maxi, it);

        return total - maxi;
    }
};
   