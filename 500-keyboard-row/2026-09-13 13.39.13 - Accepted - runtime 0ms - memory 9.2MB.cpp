
class Solution {
public:
    vector<string> findWords(vector<string>& words) {

        vector<string> ans;

        string str = "qwertyuiop";
        string str1 = "asdfghjkl";
        string str2 = "zxcvbnm";

        for (auto it : words) {

            for (char ch : it) {
                ch = tolower(ch);
            }

            int row = 0;

            if (str.find(tolower(it[0])) != string::npos) {
                row = 1;
            } else if (str1.find(tolower(it[0])) != string::npos) {
                row = 2;
            } else {
                row = 3;
            }

            bool flag = true;

            for (auto ch : it) {

                ch = tolower(ch);

                if (row == 1 && str.find(ch) == string::npos) {

                    flag = false;
                    break;
                }

                if (row == 2 && str1.find(ch) == string::npos) {

                    flag = false;
                    break;
                }

                if (row == 3 && str2.find(ch) == string::npos) {

                    flag = false;
                    break;
                }
            }

            if (flag) {
                ans.push_back(it);
            }
        }

        return ans;
    }
};