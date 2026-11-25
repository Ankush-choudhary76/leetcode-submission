class Solution {
public:
    int smallestNumber(int n, int t) {
        auto [a,b ] = div(n, 10);

        int req = t / gcd(a + (10 - a) / 10, t);
        int nxt = ((b + req - 1) / req) * req;
        int x = nxt - (nxt - 10) * (nxt / 10);

        return a* 10 + x;
    }
};