class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0;
        vector<int> freq(26, 0);
        for (auto it : word)
            freq[it - 'a']++;
        priority_queue<int> pq;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0)
                pq.push(freq[i]);
        }
        int cnt = 0, mul = 0;
        while (!pq.empty()) {
            if (cnt % 8 == 0)
                mul++;

            int x = pq.top();
            pq.pop();
            cnt++;
            ans += (mul * x);
        }
        return ans;
    }
};