class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size() ; 
        vector<int>dp(n,1);
        int cnt = n ; 

        for(int i=n-2 ; i>=0 ; i--){
            for(int j=n-1 ; j>=i+1;j--){
                if(s[i]==s[j]){
                    dp[j]=dp[j-1]; 
                }else{
                    dp[j]=0;
                }
                cnt +=dp[j];
            }
        }
        return cnt ; 
    }
};