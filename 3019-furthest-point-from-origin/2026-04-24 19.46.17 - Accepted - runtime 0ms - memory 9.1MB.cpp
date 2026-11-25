class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l = 0, r = 0, b = 0;

        for ( auto it  : moves) {
            if (it  == 'L') l++;
            else if (it  == 'R') r++;
            else b++;
        }

        return abs(l - r) + b;
    }
};