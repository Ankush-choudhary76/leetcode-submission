class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& arr) {
        int n = arr.size();

        vector<int> s(n), e(n);
        for (int i = 0; i < n; i++) {
            s[i] = arr[i][0];
            e[i] = arr[i][1];
        }
        sort(s.begin(), s.end());
        sort(e.begin(), e.end());

        long long  ans = 0, cnt = 0;
        int j = 0;

        for (int i = 0; i < n; i++) {
            while (j < n && e[j] < s[i]) {
                cnt--;
                j++;
            }
            ans += cnt;
            cnt++;
        }
        return ans ; 
    }
};