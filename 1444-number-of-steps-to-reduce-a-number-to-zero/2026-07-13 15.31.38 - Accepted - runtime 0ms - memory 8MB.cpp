class Solution {
public:
    int numberOfSteps(int n) {
        int cnt =0 ; 
        while(n){
            cnt++ ; 
            if(n%2==0){
                 n>>=1 ;
            }else{
                n= n^1 ; 
            }
        }
        return cnt ; 
    }
};