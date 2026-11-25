class Solution {
public:
   
    int numMatchingSubseq(string s, vector<string>& words) {
        int n = s.size();

        vector<vector<int>> next(n + 1, vector<int>(26, -1));
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < 26; j++) {
                next[i][j] = next[i + 1][j];
            }

            next[i][s[i] - 'a'] = i;
        }

        int cnt = 0;

        for (auto it : words) {
            int pos = 0;
            bool flag  = true;

            for (auto ch : it) {
                if (pos >= n || next[pos][ch - 'a'] == -1) {
                    flag = false;
                    break;
                }

                pos = next[pos][ch - 'a'] + 1;
            }

            if (flag) cnt++;
        }

        return cnt;
    }
};