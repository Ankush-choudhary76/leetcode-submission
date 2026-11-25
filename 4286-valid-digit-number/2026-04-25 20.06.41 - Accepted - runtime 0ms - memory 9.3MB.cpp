class Solution {
public:
    bool validDigit(int n, int x) {
        string s = to_string(n);
        char target = to_string(x)[0];

        if(s[0]==target)return false ; 
         return s.find(target)!=string::npos;
    }
};