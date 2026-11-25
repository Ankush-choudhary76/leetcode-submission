class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
        set<int> free;
        for (int i = 0; i < k; ++i) free.insert(i);
        vector<int> cnt(k, 0);
        for (int i = 0; i < arrival.size(); ++i) {
            int t = arrival[i];
            while (!pq.empty() && pq.top().first <= t) {
                free.insert(pq.top().second); pq.pop();
            }
            if (free.empty()) continue;
            auto it = free.lower_bound(i % k);
            if (it == free.end()) it = free.begin();
            int server = *it;
            free.erase(it);
            ++cnt[server];
            pq.push({t + load[i], server});
        }
        int mx = *max_element(cnt.begin(), cnt.end());
        vector<int> res;
        for (int i = 0; i < k; i++){
            if (cnt[i] == mx) res.push_back(i);
        }
        return res;
    }
};