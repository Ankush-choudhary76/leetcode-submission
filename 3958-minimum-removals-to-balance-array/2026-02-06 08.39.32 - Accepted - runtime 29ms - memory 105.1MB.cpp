class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0 , j=0;
        int maxi = 0;
        
        while(j<nums.size()) {
            while ((long long)nums[j] > (long long)nums[i] * k) {
                i++;
            }
            maxi = max(maxi, j - i + 1);
             j++;
        }
        
        return n - maxi;
    }
};