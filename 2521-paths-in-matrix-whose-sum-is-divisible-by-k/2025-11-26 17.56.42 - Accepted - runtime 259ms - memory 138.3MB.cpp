class Solution {
public:
    const int mod = 1e9 + 7;

    int m, n;
    int fun(vector<vector<int>>& grid, int& k, int i, int j, int rem,
            vector<vector<vector<int>>>& dp) {

        if (i == m - 1 && j == n - 1) {
            return ((rem + grid[i][j]) % k == 0);
        }

        if (dp[i][j][rem] != -1)
            return dp[i][j][rem];

        int right = 0, down = 0;

        int newRem = (rem + grid[i][j]) % k;

        if (i + 1 < m)
            down = fun(grid, k, i + 1, j, newRem, dp);

        if (j + 1 < n)
            right = fun(grid, k, i, j + 1, newRem, dp);

        return dp[i][j][rem] = (right + down) % mod;
    }

    int numberOfPaths(vector<vector<int>>& grid, int k) {

        m = grid.size();
        n = grid[0].size();

        vector<vector<vector<int>>> dp(
            m, vector<vector<int>>(n, vector<int>(k, -1)));

        return fun(grid, k, 0, 0, 0, dp);
    }
};