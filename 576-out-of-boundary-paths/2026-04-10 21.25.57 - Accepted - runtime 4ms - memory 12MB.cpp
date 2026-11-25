
class Solution {
public:
    int mod = 1e9 + 7;

    int fun(int n, int m, int moves, int r, int c,
            vector<vector<vector<int>>> &dp) {

       
        if (r < 0 || c < 0 || r >= n || c >= m) return 1;

       
        if (moves == 0) return 0;

        if (dp[r][c][moves] != -1) return dp[r][c][moves];

        long long up = fun(n, m, moves - 1, r - 1, c, dp);
        long long down = fun(n, m, moves - 1, r + 1, c, dp);
        long long left = fun(n, m, moves - 1, r, c - 1, dp);
        long long right = fun(n, m, moves - 1, r, c + 1, dp);

        return dp[r][c][moves] = (up + down + left + right) % mod;
    }

    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {

       
        vector<vector<vector<int>>> dp(
            m, vector<vector<int>>(n, vector<int>(maxMove + 1, -1))
        );

        return fun(m, n, maxMove, startRow, startColumn, dp);
    }
};