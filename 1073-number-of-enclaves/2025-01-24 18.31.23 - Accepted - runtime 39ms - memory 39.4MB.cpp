class Solution {
public:
  
    int numEnclaves(vector<vector<int>>& grid) {
      int n = grid.size() , m = grid[0].size();
      vector<vector<int>>vis(n , vector<int>(m,0));
      queue<pair<int,int>>q;
      for(int i= 0 ; i<n ; i++){
        for(int j = 0 ; j<m;j++){
            if(i==0 ||i==n-1 ||j==0 ||j==m-1 ){
                if(grid[i][j]==1){
                    q.push({i,j});
                    vis[i][j]=1 ; 
                }
              
            }
        }
      }
      while(!q.empty()){
        auto it = q.front();
        q.pop();
        int row = it.first;
        int col = it.second;
        vector<int>delrow = {-1,0,1,0};
        vector<int>delcol={0,1,0,-1};
        for(int i=0 ; i<4;i++){
            long nr = row + delrow[i];
            int nc = col +delcol[i];
            if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 && !vis[nr][nc]){
                q.push({nr,nc});
                vis[nr][nc]=1 ; 
            }
        }
      }
       int cnt =0 ; 
       for(int i= 0 ; i<n ; i++){
        for(int j = 0 ; j<m;j++){
            if(grid[i][j]==1 && vis[i][j]!=1){
                cnt++;
            }
        }
    }
      return cnt ; 
    }
};