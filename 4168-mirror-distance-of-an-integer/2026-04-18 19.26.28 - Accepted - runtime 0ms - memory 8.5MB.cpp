class Solution {
public:
    int fun(int n ){
        int sum =0 ; 
        while(n){
            int temp = n%10 ; 
            sum = sum*10 + temp; 
            n/=10;
        }
        return sum ; 
    }
    int mirrorDistance(int n) {
        int r = fun(n);
        return abs(n-r);
    }
};