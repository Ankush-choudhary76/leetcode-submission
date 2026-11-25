class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
       int n = grid.size();
        unordered_map<int, vector<int>>mpp;


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mpp[i - j].push_back(grid[i][j]);
            }
        }

        for (auto &it : mpp) {
            if (it.first >= 0) {
            
               sort(it.second.begin(), it.second.end(), greater<int>());
            } else {
                sort(it.second.begin(), it.second.end());
            }
        }

        
        unordered_map<int, int>mr; 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int d = i - j;
                grid[i][j] = mpp[d][mr[d]++];
            }
        }

        return grid;  
    }
};