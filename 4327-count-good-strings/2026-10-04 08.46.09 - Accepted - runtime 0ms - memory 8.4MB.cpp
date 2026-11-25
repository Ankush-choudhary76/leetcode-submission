class Solution {
public:
    const long long md = 1000000007;

    pair<long long, long long> fb(long long n) {
        if (n == 0)
            return {0, 1};

        auto p = fb(n / 2);

        long long a = p.first;
        long long b = p.second;

        long long c = a * ((2 * b % md - a + md) % md) % md;
        long long d = (a * a % md + b * b % md) % md;

        if (n % 2 == 0)
            return {c, d};

        return {d, (c + d) % md};
    }

    int countGoodStrings(long long n) {
        auto p = fb(n);

        return (2 * p.first) % md;
    }
};