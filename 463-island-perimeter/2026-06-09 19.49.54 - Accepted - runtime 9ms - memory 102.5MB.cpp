class Solution {
public:
    vector<int>r={-1 , 0 ,1 ,0};
    vector<int>c = {0 , 1 , 0 , -1};
    int dfs(int row , int col , vector<vector<int>>& grid){
        int n = grid.size() , m=grid[0].size();
        int cnt =0 ; 
         for(int i=0 ; i<4 ;i++){
            int nr = row + r[i];
            int nc = col + c[i];
            if(nr<n && nr>=0 && nc<m && nc>=0 &&grid[nr][nc]!=1){
                cnt++ ; 
            }else if( nr==-1 || nc==-1 || nr==n ||nc==m){
                cnt++;
            }
        }
        return cnt ; 
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int cnt =0  , n = grid.size() , m=grid[0].size();

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m;j++){
                if(grid[i][j]==1){
                cnt+= dfs(i , j , grid);
                }
            }
        }
        return cnt ; 
    }
};