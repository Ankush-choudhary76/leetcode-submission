class Solution {
public:
    string removeOuterParentheses(string s) {
       int lev= 0 ; 
        string res ="";
       for(auto it : s){
          if(it=='('){
            if(lev >0) res +=it;
            lev++;
          }else if (it==')'){
             lev-- ; 
            if(lev >0) res +=it;
          }
       } 
       return res;
    }
};