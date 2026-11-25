class Solution {
public:
    string toLowerCase(string s) {
        string r="";
        for(auto it : s){
            r+=tolower(it);
        }
        return r ;
    }
};