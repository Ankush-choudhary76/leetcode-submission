
class Solution {
public:
    struct Node {
        long long cost;
        int r, c, t, d;
    };

    int minCost(vector<vector<int>>& grid, int k) {

        int m = grid.size();
        int n = grid[0].size();

        const long long INF = 1e18;

        vector<vector<vector<vector<long long>>>> dist(
            m, vector<vector<vector<long long>>>(
                   n, vector<vector<long long>>(k + 1,
                                                vector<long long>(5, INF))));

        auto cmp = [](Node a, Node b) { return a.cost > b.cost; };

        priority_queue<Node, vector<Node>, decltype(cmp)> pq(cmp);

        dist[0][0][0][4] = grid[0][0];

        pq.push({grid[0][0], 0, 0, 0, 4});

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while (!pq.empty()) {

            auto it = pq.top();
            pq.pop();

            long long cost = it.cost;
            int r = it.r;
            int c = it.c;
            int turns = it.t;
            int dir = it.d;

            if (cost != dist[r][c][turns][dir])
                continue;

            if (r == m - 1 && c == n - 1)
                return cost;

            for (int nd = 0; nd < 4; nd++) {

                int nr = r + dr[nd];
                int nc = c + dc[nd];

                if (nr < 0 || nr >= m || nc < 0 || nc >= n)
                    continue;

                int nt = turns;

                if (dir != 4 && dir != nd)
                    nt++;

                if (nt > k)
                    continue;

                long long ncost = cost + grid[nr][nc];

                if (ncost < dist[nr][nc][nt][nd]) {

                    dist[nr][nc][nt][nd] = ncost;

                    pq.push({ncost, nr, nc, nt, nd});
                }
            }
        }

        return -1;
    }
};
