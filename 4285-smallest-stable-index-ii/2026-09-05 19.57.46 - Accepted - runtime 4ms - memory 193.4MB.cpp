class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
          int maxi = -1;
        int cand = 0, c = 0;

        for (int i = 0; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);

            if (i == cand) c= maxi;

            if (nums[i] < c - k)
                cand = i + 1;
        }

        return cand < nums.size() ? cand : -1;
    }
};