class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int r = 0, c = 0;
        vis[r][c] = 1;

        while (true) {
            int nr = r, nc = c;

            if (grid[r][c] == 'L')
                nc--;
            else if (grid[r][c] == 'R')
                nc++;
            else if (grid[r][c] == 'U')
                nr--;
            else if (grid[r][c] == 'D')
                nr++;

            if (nr < 0 || nr >= n || nc < 0 || nc >= m)
                break;

            if (vis[nr][nc])
                break;

            r = nr;
            c = nc;
            vis[r][c] = 1;
        }

        return {r, c};
    }
};