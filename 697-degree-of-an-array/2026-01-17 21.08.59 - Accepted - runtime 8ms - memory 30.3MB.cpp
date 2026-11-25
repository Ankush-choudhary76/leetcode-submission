class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> count, first, last;
        int degree = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (!first.count(nums[i])) first[nums[i]] = i;
            last[nums[i]] = i;
            count[nums[i]]++;
            degree = max(degree, count[nums[i]]);
        }

        int res = nums.size();
        for (auto& [num, freq] : count) {
            if (freq == degree) {
                res = min(res, last[num] - first[num] + 1);
            }
        }

        return res;
    }
};