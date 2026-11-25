class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size() , m = heights[0].size();
        vector<vector<int>>dist(n,vector<int>(m,INT_MAX));
        priority_queue<pair<int,pair<int,int>>,vector
                      <pair<int,pair<int,int>>>,
                      greater<pair<int,pair<int,int>>>>pq;
                      pq.push({0,{0,0}});
        dist[0][0] = 0;
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
      while(!pq.empty()){
        auto it = pq.top();
        pq.pop();
        int diff = it.first;
        int row = it.second.first;
        int col = it.second.second;
        if(row == n-1 && col == m-1) return diff ;
        for(int i=0 ; i<4;i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(nrow >= 0 && nrow < n && ncol >=0 && ncol <m ){
                int eff = max (abs( heights[row][col]-heights[nrow][ncol]),diff);
                if ( eff < dist[nrow][ncol]){
                    dist[nrow][ncol] = eff ;
                    pq.push({eff , {nrow,ncol}});
                }
            }
        }
      }
      return 0 ;          
    }
};