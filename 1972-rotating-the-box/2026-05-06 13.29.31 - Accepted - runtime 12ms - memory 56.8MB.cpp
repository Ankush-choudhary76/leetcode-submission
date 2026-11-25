class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int row = boxGrid.size();
        int col = boxGrid[0].size();
        vector<vector<char>> arr(col, vector<char>(row, '.'));
        for (int k = 0; k < row; k++) {
            int bot = col - 1;
            for (int j = col - 1; j >= 0; j--) {
                if (boxGrid[k][j] == '#') {
                    arr[bot][row - 1 - k] = '#';
                    bot--;
                } 
                else if (boxGrid[k][j] == '*') {
                    arr[j][row - 1 - k] = '*';
                    bot = j - 1;
                }
            }
        }
        return arr;
    
    }
};