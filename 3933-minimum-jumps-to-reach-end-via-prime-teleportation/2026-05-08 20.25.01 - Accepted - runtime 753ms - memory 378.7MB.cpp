class Solution {
public:
    int minJumps(vector<int>& nums) {
        int n = nums.size();
        int mx = *max_element(nums.begin(), nums.end());
        
        vector<bool> pri(mx+1, true);
        pri[0] = false;
        pri[1] = false;
        for (long long i=2; i<=mx; i++) {
            if (pri[i]) {
                for (long long j=i*i; j<=mx; j+=i) {
                    pri[j] = false;
                }
            }
        }

        vector<vector<int>> pos(mx+1);
        for (int i=0; i<n; i++) {
            pos[nums[i]].push_back(i);
        }

        queue<pair<int, int>> q;
        q.push({0, 0});
        vector<int> vis(n);
        vis[0] = 1;
        while (!q.empty()) {
            auto [i, t] = q.front();
            q.pop();

            if (i == n-1) return t;

            if (i > 0 && !vis[i-1]) {
                q.push({i-1, t+1});
                vis[i-1] = 1;
            }
            if (i < n-1 && !vis[i+1]) {
                q.push({i+1, t+1});
                vis[i+1] = 1;
            }

            if (pri[nums[i]]) {
                int p = nums[i];
                for (int m=p; m<=mx; m+=p) {
                    for (int j: pos[m]) {
                        if (!vis[j]) {
                            q.push({j, t+1});
                            vis[j] = 1;
                        }
                    }
                    pos[m].clear();
                }
                pri[p] = false; 
            }
        }
        return n-1;
    }
};