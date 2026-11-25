class Solution {
public:
     bool fun(int i , int j ,int ind , vector<vector<char>>& board , string word ){
        int n = board.size(),  m = board[0].size();
          if(ind == word.size()) return true  ;
           if(i<0 || j<0|| i>=n || j>=m || word[ind]!=board[i][j] ) return false ; 
           char ch = board[i][j];
            board[i][j]='#';
            
            bool falg = fun(i, j+1, ind+1, board, word) || fun(i+1, j, ind+1, board, word)||fun(i-1, j, ind+1, board, word)||fun(i, j-1 , ind+1, board, word) ;
             board[i][j]=ch;
             return falg;

     }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size();
        bool flag = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (word[0] == board[i][j]) {
                    flag = fun(i, j, 0, board, word);
                }
                if (flag)
                    return true;
            }
        }
        return false ; 
    }
};