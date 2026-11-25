class Solution {
public:
    string smallestSubsequence(string s, int k, char letter, int repetition) {

        int cnt = 0;

        for (char c : s) {
            if (c == letter)
                cnt++;
        }

        int need = repetition;

        stack<char> st;

        for (int i = 0; i < s.size(); i++) {

            char it = s[i];

            while (!st.empty() &&
                   st.top() > it &&
                   (int)st.size() - 1 + ((int)s.size() - i) >= k &&
                   (st.top() != letter || cnt > need)) {

                if (st.top() == letter)
                    need++;

                st.pop();
            }

            if ((int)st.size() < k) {

                if (it == letter) {
                    st.push(it);
                    need--;
                }
                else if (k - (int)st.size() > need) {
                    st.push(it);
                }
            }

            if (it == letter)
                cnt--;
        }

        string ans = "";

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};