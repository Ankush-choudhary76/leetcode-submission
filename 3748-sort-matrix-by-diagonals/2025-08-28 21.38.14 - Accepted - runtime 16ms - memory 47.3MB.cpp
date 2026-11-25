class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
      int n = grid.size();
        unordered_map<int, vector<int>> diag;
        
        // Step 1: Collect diagonals
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                diag[i-j].push_back(grid[i][j]);
            }
        }
        
        // Step 2: Sort diagonals
        for(auto &it : diag) {
            int d = it.first;
            if(d >= 0) { 
                // bottom-left (including main diagonal)
                sort(it.second.rbegin(), it.second.rend()); // descending
            } else { 
                // top-right
                sort(it.second.begin(), it.second.end()); // ascending
            }
        }
        
        // Step 3: Refill grid
        unordered_map<int, int> idx; // track position in each diagonal
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int d = i - j;
                grid[i][j] = diag[d][idx[d]++];
            }
        }
        
        return grid;
    }
};