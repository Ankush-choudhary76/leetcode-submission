class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr = 0;
        bool f = false;

        for (auto it  : nums) {
            xr ^= it;

            if (it != 0) {
                f = true;
            }
        }

        if (xr != 0)
            return nums.size();

        if (f)
            return nums.size() - 1;

        return 0;
    }
};