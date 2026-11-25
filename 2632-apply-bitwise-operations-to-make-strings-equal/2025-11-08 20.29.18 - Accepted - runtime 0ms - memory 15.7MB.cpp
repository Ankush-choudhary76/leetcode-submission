class Solution {
public:
    bool makeStringsEqual(string s, string target) {
         if(s==target){
            return true ;
         }

          bool a = false ; 
          bool b = false ; 

          for(int i=0 ; i<s.size() ; i++){
             if(s[i]=='1'){
                a = true ; 
                break ;
             }
          }

          for(int i=0 ; i<target.size() ; i++){
             if(target[i]=='1'){
                b = true ; 
                break ;
             }
             }
             return a==b;
    }
};