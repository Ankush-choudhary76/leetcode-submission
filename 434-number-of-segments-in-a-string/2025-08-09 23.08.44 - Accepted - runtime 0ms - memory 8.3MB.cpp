class Solution {
public:
    int countSegments(string s) {
        int cnt = 0 ; 
        int maxi = 0 ; 
         for(auto it  : s){
            if(it==' '){
             maxi += cnt ;
                cnt=0;
            }
            else {
                cnt=1;
            }
            
        }
        maxi += cnt ; 
        return maxi ; 
    }
};