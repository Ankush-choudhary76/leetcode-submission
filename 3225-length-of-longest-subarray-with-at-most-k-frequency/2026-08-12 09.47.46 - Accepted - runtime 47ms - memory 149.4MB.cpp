class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int l =0 , r=0, maxi =0 ;  
        while(r<nums.size()){
            int n = nums[r];
            mpp[nums[r]]++;
           while(mpp[nums[r]] > k){
            mpp[nums[l]]--;
                l++;
           }
            maxi = max(maxi, r - l + 1);
            r++ ;
        }
         return maxi;
    }
};