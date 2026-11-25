class Solution {
public:
    int getLucky(string s, int k) {
        long long  sum = 0 ; 
    for(auto it : s){
       int num = it-'a'+1;
       while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
    }
      
     while(k > 1) {
            long long temp = 0;
            while(sum > 0) {
                temp += sum % 10;
                sum /= 10;
            }
            sum = temp ;
            k--;
        }
        return sum;
      
    }
};