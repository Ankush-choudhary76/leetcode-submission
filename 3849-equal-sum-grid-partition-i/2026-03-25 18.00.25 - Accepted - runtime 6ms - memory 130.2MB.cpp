class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
    int n = grid.size(), m = grid[0].size();

    vector<long long > row(n, 0), col(m, 0);
    long long   tot = 0;

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            row[i] += grid[i][j];
            col[j] += grid[i][j];
            tot += grid[i][j];
        }
    }

    if (tot % 2!=0) return false;
    long long tar = tot/ 2;

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += row[i];
        if (sum == tar) return true;
    }

    
    sum = 0;
    for (int j = 0; j < m; j++) {
        sum += col[j];
        if (sum == tar) return true;
    }

    return false;
}
};