class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long   a = 0 ; a*a <= c ;a++){
            int  r = c-a*a ; 
             int b = sqrt(r);
             if(b*b==r)return true ;

        }
        return false ;
    }
};