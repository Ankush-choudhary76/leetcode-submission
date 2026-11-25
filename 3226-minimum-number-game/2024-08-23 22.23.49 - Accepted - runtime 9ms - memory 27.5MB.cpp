class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>ans ;
        while (!nums.empty()){
            int a = nums[0];
            int b = nums[1];
            ans.push_back(b);
             ans.push_back(a);
            nums.erase(nums.begin());
            nums.erase(nums.begin());
        }
        return ans ;
    }
};