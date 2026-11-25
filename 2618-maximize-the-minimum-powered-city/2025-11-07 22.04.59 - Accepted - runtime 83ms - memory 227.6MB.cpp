class Solution {
public:
    int n;
    bool check(vector<long long>& city, long long &mid, long long k, int &r) {

        vector<long long> power = city;

        long long sum = 0;
        long long cnt = 0;

        for (int i = 0; i < n; i++) {
            sum += power[i];

            if (sum < mid) {
                long long need = mid - sum;
                cnt += need;
                sum += need;

                int end = min(n, i + 2 * r + 1);
                power[end] -= need;
            }
        }

        return cnt <= k;
    }

    long long maxPower(vector<int>& stations, int r, int k) {

        n = stations.size();

        vector<long long> city(n + 1, 0);

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int start = max(0, i - r);
            int end = min(n, i + r + 1);

            city[start] += stations[i];
            city[end] -= stations[i];

            sum += stations[i];
        }

        long long lo = *min_element(stations.begin(), stations.end());
        long long hi = sum + k;

        long long ans = 0;

        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;

            if (check(city, mid, k, r)) {
                ans = mid;
                lo = mid + 1;
            } else hi = mid - 1;
        }

        return ans;
    }
};