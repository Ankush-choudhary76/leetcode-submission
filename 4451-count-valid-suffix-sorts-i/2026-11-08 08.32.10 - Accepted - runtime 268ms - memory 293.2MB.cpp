class Solution {
public:
    int countSuffix(vector<int>& a, vector<int>& b) {
         int n = a.size();
        int lim = n - 1;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                lim = i;
                break;
            }
        }
        vector<int> fr(100001, 0);
        int cnt = 0, ans = 0;
        bool flag = true;

        auto upd = [&](int x, int v) {
            if (fr[x] == 0) cnt++;
            fr[x] += v;
            if (fr[x] == 0) cnt--;
        };

        for (int i = n - 1; i >= 0; i--) {
            upd(a[i], 1);
            upd(b[i], -1);

            if (i < n - 1 && b[i] < b[i + 1]) {
                flag = false;
            }

            if (i <= lim && flag && cnt == 0) {
                ans++;
            }
        }
        return ans;
    }
};