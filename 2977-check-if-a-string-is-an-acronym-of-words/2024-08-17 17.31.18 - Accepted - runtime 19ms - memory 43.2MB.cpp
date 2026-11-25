class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n =words.size() , m = s.size();
        if( n != m ) return false ;
        int i=0 ;
        for(auto it : words){
          if(it[0] != s[i]) return false ;
          i++;
        }
        return true ;
    }
};