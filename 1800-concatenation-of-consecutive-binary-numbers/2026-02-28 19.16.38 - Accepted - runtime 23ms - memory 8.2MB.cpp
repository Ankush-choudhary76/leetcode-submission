class Solution {
public:
    int mod = 1e9 + 7;
    int concatenatedBinary(int n) {
        long long  res =0 ;
         int bit=0 ; 
        for(int i=1 ; i<=n ;i++){
            if((i&(i-1))==0){
                bit++;
            }
            res = ((res<<bit)+i)%mod;
        }
        return res ; 
    }
};