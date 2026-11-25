class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size() ;
        if(grid[0][0]!=0) return -1 ;
        vector<vector<int>>dist(n,vector<int>(n,1e9));
        queue<pair<int,pair<int,int>>>q;
        q.push({1,{0,0}});
        dist[0][0] = 0 ;
        int delrow[] = {-1,-1,0,1,1,1,0,-1};
        int delcol[]={0,1,1,1,0,-1,-1,-1};
        while(!q.empty()){
            auto it = q.front();
            int step = it.first;
            int row = it.second.first;
            int col = it.second.second;
            q.pop();
            if(row == n-1 && col == n-1) return step ;
           for(int i=0 ;i< 8;i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(nrow >=0 && nrow <n && ncol >=0 && ncol <n && grid[nrow][ncol]==0 ){
                if (step+1 < dist[nrow][ncol]){
                    dist[nrow][ncol] = step+1;
                  q.push({step+1,{nrow,ncol}});
                }
            }
           }
        }
        return -1 ;
    }
};