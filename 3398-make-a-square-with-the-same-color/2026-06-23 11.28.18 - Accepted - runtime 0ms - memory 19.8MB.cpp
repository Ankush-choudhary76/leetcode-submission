class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for(int i = 0; i<2; i++){
            for(int j = 0; j<2; j++){
                char a = grid[i][j] , b = grid[i][j+1] , c = grid[i+1][j] , d = grid[i+1][j+1];
                if(a == b && b == c && c == d)
                return true;
                else if(a == b && b == c && c != d)
                return true;
                else if(a == b && b == d && c != d)
                return true;
                else if(a == c && c == d && b != d)
                return true;
                else if(d == b && b == c && a != d)
                return true;
            }
        }
        return false;
    }
};