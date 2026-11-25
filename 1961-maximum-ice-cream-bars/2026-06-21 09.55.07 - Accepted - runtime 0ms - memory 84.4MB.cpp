class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxel = *max_element(costs.begin(), costs.end());
        vector<int> freq(maxel + 1, 0);
        for (int it : costs)
            freq[it]++;
        int cnt = 0;
        for (int i = 1; i <= maxel; i++) {
            if (freq[i] == 0)
                continue;
            int v = min(freq[i], coins / i);
            cnt += v;
            coins -= v * i;
            if (coins < i)
                break;
        }
        return cnt;
    }
};