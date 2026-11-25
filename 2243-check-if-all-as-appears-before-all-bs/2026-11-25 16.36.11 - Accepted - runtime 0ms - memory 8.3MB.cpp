class Solution {
public:
    bool checkString(string s) {
        bool flag = false;
        for (auto it : s) {
            if (it == 'b') {
                flag = true;
            }
            if (flag && it != 'b') {
                return false;
            }
        }
        return true;
    }
};