class Solution {
public:
    bool canReach(string s, int mi, int ma) {
        if (s.back() == '1')
            return false;
        vector<bool> dp(s.size());
        dp[0] = true;
        int cnt = 0;
        for (int i = 1; i < s.size(); i++) {
            if (i > ma) {
                cnt -= dp[i - ma - 1];
            }
            if (i >= mi) {
                cnt += dp[i - mi];
            }
            if (cnt > 0 && s[i] == '0')
                dp[i] = true;
            else
                dp[i] = false;
        }
        return dp.back();
    }
};