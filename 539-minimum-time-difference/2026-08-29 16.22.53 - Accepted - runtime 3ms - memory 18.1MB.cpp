class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {

        vector<int> nums;

        for (string t : timePoints) {

            int h = (t[0] - '0') * 10 + (t[1] - '0');
            int m = (t[3] - '0') * 10 + (t[4] - '0');

            nums.push_back(h * 60 + m);
        }

        sort(nums.begin(), nums.end());

        int ans = 1440;

        for (int i = 1; i < nums.size(); i++) {

            int diff = nums[i] - nums[i - 1];

            ans = min(ans, diff);
        }

        int diff = 1440 - nums.back() + nums[0];

        ans = min(ans, diff);

        return ans;
    }
};