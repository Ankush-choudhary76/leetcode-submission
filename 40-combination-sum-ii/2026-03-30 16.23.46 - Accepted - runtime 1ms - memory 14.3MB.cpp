class Solution {
public:
    vector<vector<int>> res;
    void fun(int ind , vector<int>& can , int target ,vector<int>&path){
     if (target == 0) {
            res.push_back(path);
            return;
        }

        for (int i = ind; i < can.size(); i++) {
            
            if (i > ind && can[i] == can[i - 1]) continue;

            if (can[i] > target) break;

            path.push_back(can[i]);
            fun(i + 1, can, target - can[i], path);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> path;
        fun(0, candidates, target, path);
        return res;
        
    }
};