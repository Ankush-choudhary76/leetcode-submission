class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        long res = 0;
        long curr = 0;
        int sign = 1;

        for (char it : s) {
            if (isdigit(it)) {
                curr = curr * 10 + (it - '0');
            } else if (it == '+') {
                res += sign * curr;
                sign = 1;
                curr = 0;
            } else if (it == '-') {
                res += sign * curr;
                sign = -1;
                curr = 0;
            } else if (it == '(') {
                st.push(res);
                st.push(sign);
                res = 0;
                sign = 1;
            } else if (it == ')') {
                res += sign * curr;
                curr = 0;
                res *= st.top(); st.pop();
                res += st.top(); st.pop();
            }
        }

        res += sign * curr;
        return res;
    }
};