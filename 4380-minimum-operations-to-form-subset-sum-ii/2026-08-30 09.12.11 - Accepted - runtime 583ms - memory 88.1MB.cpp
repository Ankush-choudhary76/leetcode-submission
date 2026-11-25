class Solution {
public:
    int minOperations(vector<int>& nums, int sum) {
        int n = nums.size();
        int mx = 2 * sum;

        vector<vector<pair<int,int>>> arr(n);

        for (int i = 0; i < n; i++) {
            int x = nums[i];

            unordered_map<int, int> cost;
            queue<int> q;

            cost[x] = 0;
            q.push(x);

            while (!q.empty()) {
                int a = q.front();
                q.pop();

                int c = cost[a] + 1;

                if (a <= mx) {
                    int b = a * 2;

                    if (b <= mx && !cost.count(b)) {
                        cost[b] = c;
                        q.push(b);
                    }
                }

                int b = a / 2;

                if (b > 0 && !cost.count(b)) {
                    cost[b] = c;
                    q.push(b);
                }
            }

            for (auto &p : cost) {
                if (p.first <= sum) {
                    arr[i].push_back({p.first, p.second});
                }
            }
        }

        vector<int> dp(sum + 1, INT_MAX);
        dp[0] = 0;

        for (int i = 0; i < n; i++) {
            vector<int> temp = dp;

            for (int j = 0; j <= sum; j++) {
                if (dp[j] == INT_MAX)
                    continue;

                for (auto &p : arr[i]) {
                    int x = p.first;
                    int c = p.second;

                    if (j + x <= sum) {
                        temp[j + x] = min(
                            temp[j + x],
                            dp[j] + c
                        );
                    }
                }
            }

            dp = temp;
        }

        return dp[sum] == INT_MAX ? -1 : dp[sum];
    }
};