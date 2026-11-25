const long double INF = 1e9;

class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        int n = points.size();

        map<long double, int> slope;
        map<pair<long double, long double>, int> line;

        map<pair<long double, long long>, int> rhombus_slope;
        map<pair<pair<long double, long double>, long long>, int> rhombus_line;

        int ans = 0, rhombus = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                long long dx = points[i][0] - points[j][0];
                long long dy = points[i][1] - points[j][1];
                long double _m = dx == 0 ? INF : (double)dy / (double)dx;
                long double _b =
                    _m == INF ? points[i][0] : points[i][1] - _m * points[i][0];
                long double m = round(_m * INF) / INF;
                long double b = round(_b * INF) / INF;
                ans += slope[m]++ - line[{m, b}]++;
                long long side_length = dx * dx + dy * dy;
                rhombus += rhombus_slope[{m, side_length}]++ -
                             rhombus_line[{{m, b}, side_length}]++;
            }
        }

        return ans - rhombus / 2;
    }
};