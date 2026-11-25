class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string  r = s ; 
        reverse(r.begin(), r.end());
        int n =  r .size();
        vector<vector<int>>dp(n+1, vector<int>(n+1,0));
        for(int ind1 =1 ; ind1<=n ; ind1++){
            for(int ind2 = 1 ; ind2<=n ; ind2++){
                if(s[ind1-1]==r[ind2-1]){
                    dp[ind1][ind2] = 1+dp[ind1-1][ind2-1];
                }else{
                    dp[ind1][ind2] = max(dp[ind1-1][ind2] , dp[ind1][ind2-1]);
                }
            }
        }
        return dp[n][n];
    }
};