class Solution {
public:

    int fun(int src, int n, vector<vector<pair<int,int>>> &adj, int th)
    {
        vector<int> dist(n, INT_MAX);

        priority_queue<pair<int,int>,
                       vector<pair<int,int>>,
                       greater<pair<int,int>>> pq;

        dist[src] = 0;
        pq.push({0, src});

        while(!pq.empty())
        {
            auto it = pq.top();
            pq.pop();

            int wt = it.first;
            int node = it.second;

            for(auto p : adj[node])
            {
                int adj = p.first;
                int ewt = p.second;

                if(wt + ewt < dist[adj])
                {
                    dist[adj] = wt + ewt;
                    pq.push({dist[adj], adj});
                }
            }
        }

        int cnt = 0;

        for(int i = 0; i < n; i++)
        {
            if(dist[i] <= th)
                cnt++;
        }

        return cnt;
    }

    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold)
    {
        vector<vector<pair<int,int>>> adj(n);

        for(auto it : edges)
        {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        int mini = INT_MAX;
        int ans = -1;

        for(int i = 0; i < n; i++)
        {
            int cnt = fun(i, n, adj, distanceThreshold);

            if(cnt <= mini)
            {
                mini = cnt;
                ans = i;
            }
        }

        return ans;
    }
};