class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size(), m = heights[0].size();
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>pq;
        dist[0][0] = 0;
        pq.push({0, {0, 0}});
        int delrow[] = {0, 1, 0, -1};
        int delcol[] = {-1, 0, 1, 0};
        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            int dis = it.first;
            int row = it.second.first;
            int col = it.second.second;
            for (int i = 0; i < 4; i++) {
                int nr = row + delrow[i];
                int nc = col + delcol[i];
                if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
                    int neweffort =
                        max(abs(heights[row][col] - heights[nr][nc]), dis);
                    if (neweffort < dist[nr][nc]) {
                        dist[nr][nc] = neweffort;
                        pq.push({neweffort, {nr, nc}});
                    }
                }
            }
        }
       return dist[n-1][m-1];
    }
};