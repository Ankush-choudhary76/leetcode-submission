class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
       int j= 0 , n = s.size();
       for(  auto it : words){
        if( j>= n || s[j++]!= it[0]){
            return false ;
        }
       }
        return j==n ;
    }
};