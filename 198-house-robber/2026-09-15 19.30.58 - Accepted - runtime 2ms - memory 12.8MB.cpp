class Solution {
public:
    int fun(int ind , vector<int>nums , vector<int>&dp){
        if(ind<0) return 0 ; 
         if(dp[ind]!=-1 ) return dp[ind];
        int nt = fun(ind-1 , nums , dp);
        int take = nums[ind]+fun(ind-2 ,nums , dp);
        return dp[ind]=  max(nt , take );
    }
    int rob(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int>dp(n,-1) ; 
        return fun(n-1 , nums , dp  );
    }
};