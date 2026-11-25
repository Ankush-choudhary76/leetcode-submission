class Solution {
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        vector<vector<int>> adj(n);
        for (int i = 0; i<n; i++){
            for (int j = 0; j<n; j++){
                if (i==j) continue;
                int x = bombs[j][0]-bombs[i][0];
                int y = bombs[j][1]-bombs[i][1];
                int r = bombs[i][2];
                if (1LL*x*x+1LL*y*y<=1LL*r*r){
                    adj[i].push_back(j);
                }
            }
        }
        int ans = 0;
        vector<bool> vis(n);
        queue<int> q;
        for (int i = 0; i<n; i++){
            vis.assign(n, false);
            int det = 1;
            q.push(i);
            vis[i] = true;
            while (!q.empty()){
                int bomb = q.front();
                q.pop();
                for (int in: adj[bomb]){
                    if (!vis[in]){
                        det++;
                        q.push(in);
                        vis[in] = true;
                    }
                }
            }
            ans = max(ans, det);
        }
        return ans;
    }
};