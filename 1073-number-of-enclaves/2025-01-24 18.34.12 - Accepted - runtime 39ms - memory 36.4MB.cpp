class Solution {
public:
  
    int numEnclaves(vector<vector<int>>& grid) {
         queue<pair<int,int>>q;
      int n = grid.size() , m = grid[0].size();
      for(int i= 0 ; i<n ; i++){
        for(int j = 0 ; j<m;j++){
            if(i==0 ||i==n-1 ||j==0 ||j==m-1 ){
                if(grid[i][j]==1){
                    q.push({i,j}); 
                    grid[i][j]=0 ;
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
            if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 ){
                q.push({nr,nc});
                grid[nr][nc]=0 ; 
            }
        }
      }
       int cnt =0 ; 
       for(int i= 0 ; i<n ; i++){
        for(int j = 0 ; j<m;j++){
            if(grid[i][j]==1 ){
                cnt++;
            }
        }
    }
      return cnt ; 
    }
};