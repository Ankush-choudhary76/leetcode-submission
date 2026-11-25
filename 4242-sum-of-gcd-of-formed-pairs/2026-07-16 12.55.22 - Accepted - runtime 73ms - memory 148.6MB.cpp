class Solution {
public:
    long long gcdSum(vector<int>& nums) {
           int maxi =0 ; 
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
            }
            nums[i] = gcd(nums[i], maxi);
        }
        sort(nums.begin(), nums.end());

        int l = 0, r = nums.size() - 1;
        long long  sum=0;
        while (l < r) {
            sum += gcd(nums[l], nums[r]);
            l++;
            r--;
        }
        return sum ; 
    }
};