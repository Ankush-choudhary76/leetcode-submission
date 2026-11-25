class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1 ;
        int sum = 10;
        int a =9; 
        int av = 9 ;
        for(int i=2 ; i<=n ; i++){
            a  =a*av ;
            sum+=a;
            av--;
        }
        return sum;
    }
};