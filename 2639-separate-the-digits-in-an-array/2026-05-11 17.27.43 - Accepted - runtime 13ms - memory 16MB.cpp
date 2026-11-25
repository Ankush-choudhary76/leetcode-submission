

class Solution {
public:
    void func(int n, vector<int>& ans) {
        vector<int> arr;
        while (n > 0) {
            arr.push_back(n % 10);
            n /= 10;
        }
        reverse(arr.begin(), arr.end());
        for (auto it : arr) {
            ans.push_back(it);
        }
    }

    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            func(nums[i], ans);
        }
        return ans;
    }
};