class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0   ; 
        reverse(s.begin() , s.end());
        for(auto it : s){
            if(it !=' '){
            cnt++;
            }else if(cnt>0){
                break ; 
            }
        }
        return cnt ; 
    }
};