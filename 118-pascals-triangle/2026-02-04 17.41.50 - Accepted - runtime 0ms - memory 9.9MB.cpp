class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        vector<int> row ;
        
        for (int i = 0; i < numRows; i++) {
            vector<int> cr(i + 1, 1);
            
            for (int j = 1; j < i; j++) {
                cr[j] = row[j - 1] + row[j];
            }
            
            res.push_back(cr);
            row = cr;
        }
        
        return res;
    }
};