class Solution {
public:
   
    int numMatchingSubseq(string s, vector<string>& words) {
        int n = s.size();

        vector<vector<int>> dp(n + 1, vector<int>(26, -1));
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < 26; j++) {
                dp[i][j] = dp[i + 1][j];
            }

            dp[i][s[i] - 'a'] = i;
        }

        int cnt = 0;

        for (auto it : words) {
            int pos = 0;
            bool flag  = true;

            for (auto ch : it) {
                if (pos >= n || dp[pos][ch - 'a'] == -1) {
                    flag = false;
                    break;
                }

                pos = dp[pos][ch - 'a'] + 1;
            }

            if (flag) cnt++;
        }

        return cnt;
    }
};