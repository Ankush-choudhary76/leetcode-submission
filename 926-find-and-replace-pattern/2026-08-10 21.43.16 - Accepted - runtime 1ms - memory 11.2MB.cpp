class Solution {
public:
    string fun(string s) {
        unordered_map<char, char> mpp;
        char n = 'a';
        for (int i = 0; i < s.length(); i++) {
            if (mpp.find(s[i]) == mpp.end()) {
                mpp[s[i]] = n++;
            }
            s[i] = mpp[s[i]];
        }
        return s;
    }
    vector<string> findAndReplacePattern(vector<string>& words,
                                         string pattern) {
        string tar = fun(pattern);
        vector<string> ans;
        for (auto it : words) {
            if (fun(it) == tar) {
                ans.push_back(it);
            }
        }

        return ans;
    }
};