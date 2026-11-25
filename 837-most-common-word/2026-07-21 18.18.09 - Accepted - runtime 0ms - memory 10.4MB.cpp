class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        unordered_set<string> st;

        for (auto  it : banned)
            st.insert(it);

        unordered_map<string, int> mpp;

        string word = "";

        paragraph += ' ';

        for (auto it  : paragraph) {

            if (isalpha(it)) {
                word += tolower(it);
            } else {

                if (word != "") {

                    if (!st.count(word))
                        mpp[word]++;

                    word = "";
                }
            }
        }

        string ans = "";
        int mx = 0;

        for (auto it : mpp) {

            if (it.second > mx) {
                mx = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};