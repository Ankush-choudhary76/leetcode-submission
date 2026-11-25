class Solution {
public:
    long long   fun(int row , int col  ,vector<vector<int>>&grid  , vector<vector<int>>&vis ){
        int n = grid.size() , m = grid[0].size() ; 
         vis[row][col] = 1 ;
        if( grid[row][col]==0) return 0 ; 
        vector<int>r={0,1,0,-1}; 
        vector<int>c={-1,0,1,0}; 
        
        long long  sum = grid[row][col] ; 

        for(int i=0 ; i<4 ; i++){
            int nr = row + r[i];
            int nc = col + c[i] ; 
            if(nr >= 0 && nr<n && nc>=0  && nc<m && !vis[nr][nc]){
                sum+= fun(nr , nc , grid , vis) ; 
            }
        }

    return sum ; 
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int n = grid.size() , m = grid[0].size() ; 

        vector<vector<int>>vis(n  , vector<int>(m, 0)) ; 

        int cnt =0 ; 

        for(int i=0 ; i< n ; i++){
            for(int j=0 ; j<m ;j++){
                if(grid[i][j]!= 0 && !vis[i][j]){
                    long long  sum  = fun(i , j , grid , vis) ; 
                    sum %k ==0 ? cnt++ : cnt += 0 ; 
                }
            }
        }
        return cnt ; 
    }
};