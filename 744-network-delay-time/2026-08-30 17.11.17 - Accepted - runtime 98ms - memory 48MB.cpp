class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> adj(n+1);

        for (auto it : times) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            adj[u].push_back({v, wt});
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        pq.push({0, k});
        
        vector<int> dist(n+1, 1e9);
        dist[k]=0;
        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            int t = it.first;
            int node = it.second;

            if (t > dist[node])
                continue;

            for (auto p : adj[node]) {
                int u = p.first;
                int wt = p.second;

                if (t + wt < dist[u]) {
                    dist[u] = t + wt;
                    pq.push({t + wt, u});
                }
            }
        }
        int maxi = 0;
        for (int i = 1; i <=n; i++) {
            if (dist[i] == 1e9)
                return -1;
            maxi = max(maxi, dist[i]);
        }
        return maxi;
    }
};