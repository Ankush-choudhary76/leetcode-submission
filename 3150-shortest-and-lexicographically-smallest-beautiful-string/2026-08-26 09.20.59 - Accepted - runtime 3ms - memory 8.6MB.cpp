class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l = 0, r = 0,cnt=0;
        string str = "";
        while (r < s.size()) {
            if (s[r] == '1')
                cnt++;
            while (cnt > k) {
                if (s[l] == '1')
                    cnt--;
                l++;
            }
            if (cnt == k) {
                while (l <= r && s[l] == '0') {
                    l++;
                }
                string curr = s.substr(l, r - l + 1);

                if (str == "" || str.size() > curr.size()) {
                    str = curr;
                } else if (curr.size() == str.size() && curr < str) {
                    str = curr;
                }
            }
            r++;
        }
            return str;
        }
    };