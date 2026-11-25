class Solution {
public:
    int lengthOfLastWord(string s) {
        int maxlen =0, len=0;
       for(auto it : s){
        if(it !=' '){
          len++;
           maxlen = len ;  
        }else{
            len=0 ;
        }
       } 
       return maxlen ;
    }
};