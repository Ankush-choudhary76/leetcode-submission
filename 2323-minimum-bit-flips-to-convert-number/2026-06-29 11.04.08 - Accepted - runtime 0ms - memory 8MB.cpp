class Solution {
public:
    int minBitFlips(int s, int g) {
        int cnt =0 ; 
        while(s || g){
            if( (s&1) != (g&1))cnt++;
            s>>=1 ;
            g>>=1;
        }
        return cnt  ; 
    }
};