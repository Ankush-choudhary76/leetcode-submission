class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int n = image.size(), m = image[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int val = image[sr][sc];
        queue < pair<int, int>>q;
        q.push({sr, sc});
        vis[sr][sc] = 1;
        vector<int> row = {-1, 0, 1, 0};
        vector<int> col = {0, 1, 0, -1};
        while (!q.empty()) {
            auto it = q.front();
            q.pop();
            int r = it.first;
            int c = it.second;
            image[r][c] = color;
            for (int i = 0; i < 4; i++) {
                int nr = row[i] + r;
                int nc = col[i] + c;
                if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                    image[nr][nc] == val  && !vis[nr][nc]) {
                    vis[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
        return image ;
    }
};