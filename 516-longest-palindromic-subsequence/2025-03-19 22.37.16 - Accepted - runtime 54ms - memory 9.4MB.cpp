class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string  r = s ; 
        reverse(r.begin(), r.end());
        int n =  r .size();
        vector<int>dp(n+1,0);
        vector<int>temp(n+1,0);
        for(int ind1 =1 ; ind1<=n ; ind1++){
            for(int ind2 = 1 ; ind2<=n ; ind2++){
                if(s[ind1-1]==r[ind2-1]){
                    temp[ind2] = 1+dp[ind2-1];
                }else{
                    temp[ind2] = max(dp[ind2] , temp[ind2-1]);
                }
            }
            dp = temp ; 
        }
        return dp[n];
    }
};