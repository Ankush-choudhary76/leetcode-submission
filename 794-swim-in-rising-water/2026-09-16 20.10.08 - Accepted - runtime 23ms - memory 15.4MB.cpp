class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
        dist[0][0] = grid[0][0];
        pq.push({grid[0][0], 0, 0});
        vector<int> row = {1, 0, -1, 0}, col = {0, -1, 0, 1};

        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            int d = it[0],  r = it[1], c = it[2];
            if (dist[r][c] < d)
                continue;
            if (r == n - 1 && c == n - 1)
                return d;

                    for (int i = 0; i < 4; i++) {
                    int nr = r + row[i];
                    int nc = c + col[i];

                    if (nr >= 0 && nr < n && nc >= 0 && nc < n) {
                        int val = max(d, grid[nr][nc]);
                        if (val < dist[nr][nc]) {
                            dist[nr][nc] = val;
                            pq.push({val, nr, nc});
                        }
                    }
                }
            }
            return -1 ; 
        }
        
};