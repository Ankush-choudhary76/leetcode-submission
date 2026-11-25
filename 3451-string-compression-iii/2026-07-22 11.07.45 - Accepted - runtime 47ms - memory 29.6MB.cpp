class Solution {
public:
    string compressedString(string word) {
        string ans;
        int i = 0;

        while (i < word.size()) {
            char ch = word[i];
            int cnt = 0;

            while (i < word.size() && word[i] == ch && cnt < 9) {
                cnt++;
                i++;
            }

            ans += to_string(cnt);
            ans += ch;
        }

        return ans;
    }
};