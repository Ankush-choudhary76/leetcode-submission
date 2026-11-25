class Solution {
public:
    string digitSum(string s, int k) {
         while (ssize(s) > k) {
            string str;
            for (int i = 0; i < ssize(s); i += k) {
                string_view group = string_view(s).substr(i, k); 
                str += to_string(accumulate(group.begin(), group.end(), 0, [](int sum, char d) { return sum + d - '0'; }));
            }
            s = str;
        }
        return s;
    }
};