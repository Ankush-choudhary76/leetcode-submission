class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
          int n = nums.size();
    unordered_map<int, vector<int>> mpp;
    for (int i = 0; i < n; i++) {
        mpp[nums[i]].push_back(i);
    }
    
    vector<int> result;
    
    for (auto q : queries) {
        int val = nums[q];
        vector<int>&arr = mpp[val];
       
        if (arr.size() == 1) {
            result.push_back(-1);
            continue;
        }
        
        int ans = INT_MAX;
        
       
        auto it = lower_bound(arr.begin(), arr.end(), q)-arr.begin();
        
      
       int left = arr[(it - 1 + arr.size()) % arr.size()];
        int d = abs(q-left);
        ans = min(ans, min(d, n - d));
        
        int right = arr[(it + 1) % arr.size()];
        int e = abs(q- right);
        ans = min(ans, min(e, n - e));
        
        result.push_back(ans);
    }
    
    return result;
    }
};