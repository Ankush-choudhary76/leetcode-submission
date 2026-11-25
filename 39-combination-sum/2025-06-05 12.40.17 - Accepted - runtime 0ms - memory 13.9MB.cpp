class Solution {
public:
void summ(vector<int>& candidates, int target, vector<vector<int>>& result, int ind, vector<int>& temp) {
    if (target == 0) {
        result.push_back(temp);
        return;
    }
    if (ind >= candidates.size() || target < 0) return;
    
    temp.push_back(candidates[ind]);
    summ(candidates, target - candidates[ind], result, ind, temp);
    temp.pop_back();
    summ(candidates, target, result, ind + 1, temp);
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> result;
    vector<int> temp;
    summ(candidates, target, result, 0, temp);
    return result;  
    }
};