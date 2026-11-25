class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());
        int mini = nums[0] ,maxi = nums[nums.size()-1];
        int sum = maxi - mini ; 
        return (long long)sum*k;
    }
};