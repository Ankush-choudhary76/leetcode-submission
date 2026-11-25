class Solution {
public:
    int reverse(int x) {
     int  s = 0 ; 
     
     while(x){
     int temp = x%10;
    if (s > INT_MAX / 10 || (s == INT_MAX / 10 && temp > 7)) return 0;
    if (s < INT_MIN / 10 || (s == INT_MIN / 10 && temp < -8)) return 0;
     s = s*10 + temp;
     x = x/10;
    }
      return (int)s ;
    }
};