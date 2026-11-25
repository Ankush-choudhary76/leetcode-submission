class Solution {
public:
      
    long long countDistinct(long long n) {
        long long f = n ;
     string st = to_string(f );
        int l = st.size();
        vector<vector<vector<long long >>>dp(
            l+1 , vector<vector<long long >>(2 , vector<long long>(2,0))
        );

        dp[0][1][0]=1;

        for( int pos = 0 ; pos<l; pos++){
            for( int t = 0 ; t<=1 ; t++){
                for(int s = 0 ; s<=1 ; s++){
                    long long cur = dp[pos][t][s];
                    if(cur ==0) continue ; 

                    int  limit = t ? (st[pos]-'0') :9;

                    for(int d =0 ; d <=limit ; d++){
                        int nt = (t && d == limit) ? 1 : 0 ; 

                         if(!s){
                             if(d==0){
                                 dp[pos+1][nt][0] += cur;
                             }else{
                                 dp[pos+1][nt][1] += cur ;
                             }
                        }else{
                             if(d ==0 ) continue ; 
                             dp[pos+1][nt][1] += cur; 
                        }
                    }
                }
            }
        }
        long long ans = dp[l][0][1] + dp[l][1][1];
        return ans ; 
    }
};