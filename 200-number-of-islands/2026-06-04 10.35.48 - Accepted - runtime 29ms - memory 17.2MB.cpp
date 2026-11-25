class Solution {
public:
    vector<int>row={-1 ,0 ,1 ,0};
    vector<int>col={0 ,1 ,0 ,-1};
    void dfs(int r , int c , vector<vector<int>>&vis, vector<vector<char>>& grid){
        int n = grid.size() , m = grid[0].size(); 
        vis[r][c]=1 ; 
        for(int i=0 ; i<4;i++){
            int nr = row[i]+r;
            int nc = col[i]+c;
            if(nr<n && nr>=0 && nc<m && nc>=0 && grid[nr][nc]=='1' && !vis[nr][nc]){
                dfs(nr , nc , vis , grid );
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size() , m = grid[0].size(); 
        vector<vector<int>>vis(n , vector<int>(m,0));
        int cnt =0 ; 
        for(int i =0 ; i<n ;i++){
            for(int j=0 ; j<m ; j++){
                if(!vis[i][j]&& grid[i][j]=='1'){
                      dfs(i , j , vis , grid);
                      cnt++;
                }
            }
        }
        return cnt ; 
    }
};