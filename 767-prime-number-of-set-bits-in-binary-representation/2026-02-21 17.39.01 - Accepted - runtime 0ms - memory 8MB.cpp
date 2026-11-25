class Solution {
public:
    bool check(int n ){
        if(n<=1)return false ; 
        for(int i =2 ; i*i<=n;i++){
            if(n%i==0){
                return false ; 
            }
        }
        return true ; 
    }
    int countPrimeSetBits(int left, int right) {
        int cnt =0. ; 
        for(int i=left ; i<=right ; i++){
            int bit = __builtin_popcount(i);

            if(check(bit)){
                cnt++;
            }
        }
        return cnt ; 
    }
};