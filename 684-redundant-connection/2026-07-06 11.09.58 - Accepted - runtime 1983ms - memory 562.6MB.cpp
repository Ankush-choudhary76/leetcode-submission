class Solution {
public:
    bool bfs(int src, int dest, vector<vector<int>>& adj, int n) {
        vector<int> vis(n + 1, 0);
        queue<int> q;

        q.push(src);
        vis[src] = 1;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            if (node == dest)
                return true;

            for (auto it : adj[node]) {
                if (!vis[it]) {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }

        return false;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

        int n = edges.size();

        vector<int> ans;

        for (int i = 0; i < n; i++) {

            vector<vector<int>> adj(n + 1);

            for (int j = 0; j < n; j++) {
                if (i == j)
                    continue;

                int u = edges[j][0];
                int v = edges[j][1];

                adj[u].push_back(v);
                adj[v].push_back(u);
            }

            if (bfs(edges[i][0], edges[i][1], adj, n)) {
                ans = edges[i];
            }
        }

        return ans;
    }
};