class Solution {
public:
    int solve(vector<int>& nums, int i, int j) {
        if (i > j) {
            return 0;
        }

        if (i == j) {
            return nums[i];
        }

        int tc  = nums[i] - solve(nums, i + 1, j);
        int nc = nums[j] - solve(nums, i, j - 1);

        return max(tc, nc);
    }

    bool predictTheWinner(vector<int>& nums) {
        return solve(nums, 0, nums.size() - 1) >= 0;
    }
};