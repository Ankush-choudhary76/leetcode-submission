class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minval = nums[0];
        int maxi = -1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > minval) {
                maxi = max(maxi, nums[i] - minval);
            }
            minval = min(minval, nums[i]);
        }

        return maxi;
    
    }
};