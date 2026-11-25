class Solution {
public:
    string removeOuterParentheses(string s) {
        int len = 0;
        string str = "";
        for (auto it : s) {
            if (it == '(') {
              
                if (len > 0)
                    str += it;
                len++;
            } else if (it == ')') {
                len--;
                if (len > 0)
                    str += it;
            }
        }
        return str ; 
    }
};