class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,1);
        for(int i=0 ; i<n ; i++){
            for(int prev = 0 ; prev<i ; prev++){
                if(nums[i]>nums[prev] && dp[i]<dp[prev]+1){
                    dp[i] = 1 + dp[prev]; 
                }
            }
        }
        int ans = 0 ; 
        for(auto it : dp){
           if(it > ans) ans = it ; 
        }
        return ans ; 
    }
};