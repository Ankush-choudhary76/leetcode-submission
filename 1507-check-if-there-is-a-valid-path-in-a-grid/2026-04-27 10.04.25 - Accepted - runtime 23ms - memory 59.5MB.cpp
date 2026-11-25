class DisjointSet {
        vector<int> parent;
    public:
        DisjointSet(int k) {
            parent.resize(k);
            for (int i = 0; i < k; i++) parent[i] = i;
        }

        int find(int x) {
            return parent[x] == x ? x : parent[x] = find(parent[x]);
        }

        void join(int u, int v) {
            int pu = find(u), pv = find(v);
            if (pu != pv) parent[pu] = pv;
        }
};
class Solution {
public:
    bool right(int t) { return t == 1 || t == 4 || t == 6; }
    bool left(int t) { return t == 1 || t == 3 || t == 5; }
    bool up(int t) { return t == 2 || t == 5 || t == 6; }
    bool down(int t) { return t == 2 || t == 3 || t == 4; }

    bool hasValidPath(vector<vector<int>>& grid) {
    int m = grid.size(), n = grid[0].size();
        DisjointSet dsu(m * n);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (j + 1 < n && right(grid[i][j]) && left(grid[i][j + 1])) {
                    dsu.join(i * n + j, i * n + j + 1);
                }
                if (i + 1 < m && down(grid[i][j]) && up(grid[i + 1][j])) {
                    dsu.join(i * n + j, (i + 1) * n + j);
                }
            }
        }

        return dsu.find(0) == dsu.find(m * n - 1);
    }
};