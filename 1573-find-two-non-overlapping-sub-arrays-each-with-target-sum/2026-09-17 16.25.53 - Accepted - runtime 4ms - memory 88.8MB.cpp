class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size() ; 

        vector<int>dp(n , 1e9);
        int r = 0 , l=0  , ans = 1e9 ; 
        int sum =0 ; 
        while(r<n){
           sum+=arr[r];

           while(sum > target){
                  sum-=arr[l];
                  l++;
           }
           if (r > 0) {
                dp[r] = dp[r - 1];
            }
            if(sum == target){
                int len = r - l + 1;
                if(l>0 && dp[l-1]!= 1e9){
                     ans = min(ans, len + dp[l - 1]);
                }
                dp[r] = min(dp[r], len);
            }
             r++ ; 
        }
       return  ans !=1e9 ?ans : -1 ;
    }
};