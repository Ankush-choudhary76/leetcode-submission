class Solution {
public:
    bool checkString(string s) {
        bool flag = false;
        for (auto it : s) {
            if (it == 'b') {
                flag = true;
            } else if (flag && it == 'a')
                return false;
        }
        return true;
    }
};