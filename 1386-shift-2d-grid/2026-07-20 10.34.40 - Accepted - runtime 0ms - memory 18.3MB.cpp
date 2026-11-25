class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size() , m=grid[0].size();
        int v  = n*m;
         vector<vector<int>>ans(n ,vector<int>(m,0));
        for(int i=0 ; i<v ;i++){
            int row = i/m;
            int col = i%m ; 
            int ind = (i+k)%v;
            int nr = ind/m;
            int nc = ind%m;
            ans[nr][nc]=grid[row][col];
        }
        return ans ; 
    }
};