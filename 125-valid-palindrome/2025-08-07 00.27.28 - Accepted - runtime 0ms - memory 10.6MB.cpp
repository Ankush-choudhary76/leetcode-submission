class Solution {
public:
    bool isPalindrome(string s) {
      string str ="" ;
        for(auto it : s){
            if(('a'<= it && it<='z') || ('A'<= it && it<='Z')||('0'<=it && it<='9'))
                str +=tolower(it);    
        }
        string r = str ; 
        reverse(str.begin() , str.end()); 
         return r==str ;
    }
};