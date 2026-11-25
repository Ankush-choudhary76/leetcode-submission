class Solution {
public:
    string replaceDigits(string s) {
string str;
        char ch;

        for (auto it : s) {
            if ('0' <= it && it <= '9') {
                str += ch + (it - '0');
            } else {
                str += it;
                ch = it;
            }
        }

        return str;
    }
};