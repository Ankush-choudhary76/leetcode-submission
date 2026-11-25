class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size() ;
        vector<int> arr(m, 0);

        for (int i = 0; i < m; i++) {
            int maxi = 0;
            for (int j = 0; j < n; j++) {
                string str = to_string(grid[j][i]);
                int a = str.size();
                maxi = max(a, maxi);
            }
            arr[i] = maxi;
        }
        return arr;
    }
};