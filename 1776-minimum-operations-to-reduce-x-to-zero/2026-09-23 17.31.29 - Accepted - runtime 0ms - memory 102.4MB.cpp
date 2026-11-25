class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();

        int tot = 0;
        for (auto it : nums) {
            tot += it;
        }

        int tar = tot - x;

        if (tar < 0) {
            return -1;
        }

        if (tar == 0) {
            return n;
        }
        int right = 0, left = 0, sum = 0, maxi = -1;

        while (right < n) {
            sum += nums[right];

            while (sum > tar) {
                sum -= nums[left];
                left++;
            }

            if (sum == tar) {
                maxi = max(maxi, right - left + 1);
            }
            right++ ; 
        }

        if (maxi == -1) {
            return -1;
        }

        return n - maxi;
    }
};