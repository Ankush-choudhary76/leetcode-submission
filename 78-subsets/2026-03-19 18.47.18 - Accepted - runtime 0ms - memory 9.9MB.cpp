class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> arr = {{}};
        for (int it  : nums) {
            int n = arr.size();
            for (int i = 0; i < n; i++) {
                arr.push_back(arr[i]); 
                arr.back().push_back(it);
            }
        }
        return arr;
    }
};