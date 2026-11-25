class Solution {
public:
    string removeDuplicateLetters(string s) {

        vector<int> freq(26, 0);

        for(auto it : s) {
            freq[it - 'a']++;
        }

        int arr[26] = {0};

        stack<char> st;

        for(auto it : s) {

            freq[it - 'a']--;

            if(arr[it - 'a'])
                continue;

            while(!st.empty() &&
                  st.top() > it &&
                  freq[st.top() - 'a'] > 0) {

                arr[st.top() - 'a'] = 0;
                st.pop();
            }

            st.push(it);
            arr[it - 'a'] = 1;
        }

        string ans = "";

        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};