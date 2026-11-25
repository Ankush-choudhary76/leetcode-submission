class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size() ,tot=0 ,cnt=0 , day=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0 ; i<n;i++){
            for(int j=0 ;j<m;j++){
                if(grid[i][j]!=0) tot++;
                if(grid[i][j]==2) q.push({i,j}); 
            }
        }
        int delrow [] = {0,1,0,-1};
        int delcol []= {-1,0,1,0};
        while(!q.empty()){
            int size  = q.size();
            cnt += size;
            while(size--){
             int row = q.front().first;
             int col = q.front().second;
             q.pop();
             vis[row][col]=1;
             for(int i=0 ; i<4;i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if(nrow <0 || ncol <0 || nrow >= n || ncol >= m || grid[nrow][ncol]!=1
                ) continue ;
                     grid[nrow][ncol]=2;
                    q.push({nrow,ncol});
                }
            }
            if(!q.empty())day++;
        }
        return tot == cnt ? day : -1 ;
    }
};