class Solution {
public:
    long long minimumMaxValue(int n, int index, int value) {
         int x = value;

        if (x == 1) return -1;

        int spf = 0;

        for (int i = 2; 1LL * i * i <= x; i++) {
            if (x % i == 0) {
                spf = i;
                break;
            }
        }

        bool flag  = (spf == 0);

        if (index > 0) {
            if (flag) return -1;

            long long prv = x - spf;

            if (index > prv / 2) return -1;
        }

        long long rig = n - 1LL - index;
        long long ans = x;

        if (rig == 0) return ans;

        if (x % 2 == 0) {
            ans += 2LL * rig;
        }
        else if (flag) {
            ans = 2LL * x + 2LL * (rig - 1);
        }
        else {
                            ans = x + spf + 2LL * (rig - 1);
        }

        return ans;
    }
};