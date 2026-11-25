class Solution {
public:
    string processStr(string s) {
        string str = "";

        for (char it : s) {
            if (it == '#') {
                if (!str.empty())
                    str += str;
            }
            else if (it == '%') {
                reverse(str.begin(), str.end());
            }
            else if (it == '*') {
                if (!str.empty())
                    str.pop_back();
            }
            else {
                str += it;
            }
        }

        return str;
    }
};