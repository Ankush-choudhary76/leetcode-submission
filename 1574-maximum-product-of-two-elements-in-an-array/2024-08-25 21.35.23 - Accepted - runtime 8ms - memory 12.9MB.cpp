class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n  = nums.size();
        sort(nums.begin(), nums.end());
        int ele1 = nums[n-1]-1;
        int ele2 = nums[n-2]-1;
        return ele1*ele2;
    }
};