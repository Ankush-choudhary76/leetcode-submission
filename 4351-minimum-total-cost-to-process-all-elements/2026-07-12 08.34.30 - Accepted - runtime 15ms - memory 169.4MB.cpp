class Solution {
public:
    const long mod = 1e9+7 ;
    int minimumCost(vector<int>& nums, int k) {
        long long  r =k ;
        long long ans = 0 ;
        long long  op = 0 ; 
        for(auto it : nums){
            if(r<it){
                long long  a = it -r ;
                long long  m = (a+k-1)/k;

              __int128 cost = (__int128)m*(2LL*op+m+1)/2;
                ans= (ans+(long long )(cost%mod))%mod;

                op+=m;
                r +=m* 1LL*k;
                
            }
            r-=it;
        }
        return ans%mod;
    }
};