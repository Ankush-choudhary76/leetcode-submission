class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;

        for (int x : nums) {
            mpp[x]++;
        }

        int ans = 0;

        for (auto it : mpp) {
            int x = it.first;

            if (k == 0) {
                if (it.second >= 2) {
                    ans++;
                }
            }
            else {
                if (mpp.count(x + k)) {
                    ans++;
                }
            }
        }

        return ans;
    }
};