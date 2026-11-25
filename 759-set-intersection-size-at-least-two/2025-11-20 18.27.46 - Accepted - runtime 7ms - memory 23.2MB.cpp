bool cmp( vector<int>& a, vector<int>& b) {
    if (a[1] != b[1]) return a[1] < b[1];
    return a[0] > b[0];
    }
class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        
        int a =-1 , b = -1 , ans = 0 ; 

        for (auto it : intervals) {
            int p  = it[0], q = it[1];
            if (p > b) {
                a = q - 1;
                b = q;
                ans += 2;
            } else if (p > a) {
                a = b;
                b = q;
                ans += 1;
            }
        }
        return ans;
    }
};