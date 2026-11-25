class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
         unordered_map<int, int> mpp;
        long long gp = 0, n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int k = nums[i] - i;
            gp+= mpp[k];
            mpp[k]++;
        }
        
        return (n * (n - 1)) / 2 - gp;
    }
};