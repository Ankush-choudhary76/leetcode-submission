class Solution {
public:
     int find(string s , string r ){
        int n = s.size();
        int m = r.size();
        vector<int>dp(n+1,0),temp(m+1,0);
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=m ;j++){
                if(s[i-1]==r[j-1]){
                   temp[j] = 1+ dp[j-1];
                }else{
                    temp[j] = max(dp[j], temp[j-1]);
                }
            }
            dp = temp ;
        }
          return  temp[n];
     }
    int minInsertions(string s) {
        string r = s ; 
        int n = s.size();
        reverse(r.begin() , r.end());
          int k = find(s , r );
        return n-k ;
    }
};