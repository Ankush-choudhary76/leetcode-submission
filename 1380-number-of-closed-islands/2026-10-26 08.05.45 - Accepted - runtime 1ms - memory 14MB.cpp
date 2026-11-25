class Solution {
public:

    int fun(int row , int col ,vector<vector<int>>& grid , vector<vector<int>>& vis ){
        int n = grid.size() , m = grid[0].size() ; 
       
        if(row<  0 || row >= n || col < 0 ||col>=m) return 0 ;
        if(grid[row][col]==1 || vis[row][col]==1) return 1 ;  
         vis[row][col] =1 ; 
         int left = fun(row  , col-1 , grid , vis);
         int right = fun(row  , col+1 , grid , vis);
         int up  = fun(row-1 , col , grid , vis);
         int down  = fun(row+1  , col , grid , vis);
        
         return left && right && up && down  ; 
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size() ; 

        vector<vector<int>>vis(n , vector<int>(m,0)) ; 
         int cnt =0 ; 

         for(int i=0 ; i<n ;i++){
            for(int j=0 ; j<m ; j++){
                if(!vis[i][j] && grid[i][j]==0){
                    if(fun(i  , j , grid , vis) )cnt++ ;  
                }
            }
         }
         return cnt ; 
    }
};