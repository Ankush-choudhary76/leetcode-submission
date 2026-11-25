class Solution {
public:
    int findColoredRoot(vector<vector<int>>& edges, string colors) {
         int n = colors.size();
        vector<vector<int>> adj(n);
        vector<int> deg(n, 0);

        for (auto &e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
            deg[u]++;
            deg[v]++;
        }

        auto nxt = [&](char c) {
            if (c == 'R') return 'B';
            if (c == 'B') return 'W';
            return 'R';
        };

        vector<int> indeg(n, 0);

        for (auto &e : edges) {
            int u = e[0], v = e[1];

            if (nxt(colors[u]) == colors[v]) {
                indeg[v]++;
            }
            else if (nxt(colors[v]) == colors[u]) {
                indeg[u]++;
            }
            else {
                return -1;
            }
        }

        int root = -1;

        for (int i = 0; i < n; i++) {
            if (indeg[i] == 0) {
                if (root != -1) return -1;
                root = i;
            }
            else if (indeg[i] != 1) {
                return -1;
            }
        }

        if (root == -1 || deg[root] > 2)
            return -1;

        return root;
    }
}; 