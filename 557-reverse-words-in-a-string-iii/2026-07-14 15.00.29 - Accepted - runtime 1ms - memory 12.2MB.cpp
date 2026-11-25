class Solution {
public:
    string reverseWords(string s) {
        int n = s.size(), a = 0;

        for (int i = 0; i <=n; i++) {
            if (i == n || s[i] == ' ') {
                reverse(s.begin() + a, s.begin() + i);
                a = i + 1;
            }
        }
        return s ; 
    }
};