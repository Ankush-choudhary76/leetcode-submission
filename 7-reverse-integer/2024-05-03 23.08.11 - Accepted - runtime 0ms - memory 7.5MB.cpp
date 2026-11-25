class Solution {
public:
    int reverse(int x) {
        int   temp =0 ;
        long long  r =0;
        while(x!=0){
            temp = x%10;
            r=r*10+temp;
            x/=10;
        }
       if(r>INT_MAX || r<INT_MIN){
            return 0;     
        }
        return (int)r;
    }
};