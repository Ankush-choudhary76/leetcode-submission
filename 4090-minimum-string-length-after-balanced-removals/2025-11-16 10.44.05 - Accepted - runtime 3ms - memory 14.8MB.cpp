class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int cnt = 0 ; 
        for(auto it : s){
            if(it=='a'){
                cnt++;
            }else{
                cnt--;
            }
        }
        
        return abs(cnt) ; 
    }
};