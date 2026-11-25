class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long temp =0;
         long long r=0 ;
        int c =x;
        while(x!=0){
            temp=x%10;
            r=r*10+temp;
            x=x/10;
        }
        if(c==r){
          return true;
        } else{
            return false;
        }
        
    }
     
};
