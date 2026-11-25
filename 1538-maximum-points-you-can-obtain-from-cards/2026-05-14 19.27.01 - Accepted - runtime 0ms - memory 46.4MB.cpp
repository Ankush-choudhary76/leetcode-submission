class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int tot =0  , n = nums.size() , maxi=0;
        for (int i = 0; i < k; ++i) {
            tot += nums[i];
        }
        maxi = tot;
        for(int i=0 ; i<k;i++){
            tot-=nums[k-1-i];
            tot+=nums[n-1-i];
            maxi = max(maxi , tot);
        }
        return maxi ; 
    }
};