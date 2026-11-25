class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int e = 0, o = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                ans[e] = nums[i];
                e += 2;
            } else {
                ans[o] = nums[i];
                o +=2;
            }
        }
        return ans ; 
    }
};