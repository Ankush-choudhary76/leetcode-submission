class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
    int n = mat[0].size();
    vector<int> ans;

    for (int i = 0; i < m + n - 1; i++) {
        int row = (i < n) ? 0 : i - n + 1;   
        int col = (i < n) ? i : n - 1;       
        vector<int> temp;

        while (row < m && col >= 0) {       
            temp.push_back(mat[row][col]);
            row++;
            col--;
        }

        if (i % 2 == 0) {
            reverse(temp.begin(), temp.end());
        }

        ans.insert(ans.end(), temp.begin(), temp.end());
    }
    return ans;
    }
};