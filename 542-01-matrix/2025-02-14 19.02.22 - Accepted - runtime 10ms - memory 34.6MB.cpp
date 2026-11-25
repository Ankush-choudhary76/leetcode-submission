class Solution {
public:

vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int n = mat.size(), m = mat[0].size();
    queue<pair<int, int>> q;
    vector<vector<int>> dist(n, vector<int>(m, -1)); 

  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 0) {
                q.push({i, j});
                dist[i][j] = 0;
            }
        }
    }

   
    vector<int> delRow = {-1, 0, 1, 0};
    vector<int> delCol = {0, 1, 0, -1};
    while (!q.empty()) {
        auto [row, col] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nr = row + delRow[i];
            int nc = col + delCol[i];
            if (nr >= 0 && nc >= 0 && nr < n && nc < m && dist[nr][nc] == -1) {
                dist[nr][nc] = dist[row][col] + 1;
                q.push({nr, nc});
            }
        }
    }

    return dist;
}

};