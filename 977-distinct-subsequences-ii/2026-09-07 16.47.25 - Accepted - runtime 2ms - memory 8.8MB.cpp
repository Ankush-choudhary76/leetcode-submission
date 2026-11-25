class Solution {
     
     int mod = 1e9 + 7;

public:
    int distinctSubseqII(string s) {
        int tot = 0;
        vector<int>dp(26);

        for (auto it : s) {
            it -= 'a';
            int v = (tot - dp[it] + mod) % mod;
            dp[it] = 1 + tot;
            tot = (dp[it] + v) % mod;
        }

        return tot;
    }
}; 
