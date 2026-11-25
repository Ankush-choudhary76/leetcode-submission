class Solution {
public:
    vector<string> removeInvalidParentheses(string s) {
        vector<string> res;
        f(s, res, 0, 0);

        return res;
    }

private:
    void f(string s, auto& res, int li, int lj) {
        int bal = 0;

        for (int i = li; i < s.length(); i++) {
            bal += (s[i] == '(') - (s[i] == ')');

            if (bal >= 0) continue;

            for (int j = lj; j <= i; j++)
                if (s[j] == ')' && (j == lj || s[j - 1] != ')'))
                    f(s.substr(0, j) + s.substr(j + 1), res, i, j);

            return;
        }

        back(s, res, s.length() - 1, s.length() - 1);
    }

    void back(string s, auto& res, int ri, int rj) {
        int bal = 0;

        for (int i = ri; i >= 0; i--) {
            bal += (s[i] == ')') - (s[i] == '(');

            if (bal >= 0) continue;

            for (int j = rj; j >= i; j--)
                if (s[j] == '(' && (j == rj || s[j + 1] != '('))
                    back(s.substr(0, j) + s.substr(j + 1), res, i - 1,
                             j - 1);

            return;
        }

        res.push_back(s);
    }
};