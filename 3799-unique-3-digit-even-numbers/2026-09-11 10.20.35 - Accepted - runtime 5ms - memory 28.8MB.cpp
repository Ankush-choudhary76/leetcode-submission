class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);

        for (auto it : digits) {
            freq[it]++;
        }

        int ans = 0;

        for (int i = 100; i <= 999; i++) {

            if (i % 2 != 0) {
                continue;
            }

            int x = i;

            int a = x / 100;
            int b = (x / 10) % 10;
            int c = x % 10;

            freq[a]--;
            freq[b]--;
            freq[c]--;

            if (freq[a] >= 0 && freq[b] >= 0 && freq[c] >= 0) {
                ans++;
            }

            freq[a]++;
            freq[b]++;
            freq[c]++;
        }

        return ans;
    }
};