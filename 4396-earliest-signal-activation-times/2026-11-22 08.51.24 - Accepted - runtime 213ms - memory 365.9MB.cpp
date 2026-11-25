class Solution {
public:
    vector<long long> earliestActivationTimes(int n, vector<vector<int>>& edges,
                                              vector<int>& req) {
        vector<vector<pair<int, int>>> adj(n);
        for (auto& it : edges) {
            adj[it[0]].push_back({it[1], it[2]});
        }
        vector<long long> ans(n, -1);
        vector<int> cnt(n, 0);
        vector<bool> vis(n, false);
        priority_queue<tuple<long long, int, int>,
                       vector<tuple<long long, int, int>>,
                       greater<tuple<long long, int, int>>>
            pq;

        ans[0] = 0;
        vis[0] = true;
        for (auto& it : adj[0]) {
            pq.push({it.second, 0, it.first});
        }

        while (!pq.empty()) {
            auto [t, u, v] = pq.top();
            pq.pop();

            if (vis[v])
                continue;

            cnt[v]++;

            if (cnt[v] == req[v]) {
                vis[v] = true;
                ans[v] = t;

                for (auto& it : adj[v]) {
                    pq.push({t + it.second, v, it.first});
                }
            }
        }
        return ans;
    }
};