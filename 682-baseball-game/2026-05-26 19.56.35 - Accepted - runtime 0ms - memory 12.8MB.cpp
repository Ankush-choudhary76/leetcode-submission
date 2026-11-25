class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (auto it : operations) {

            if (it == "C") {
                st.pop();
            }

            else if (it == "D") {
                st.push(st.top() * 2);
            }

            else if (it == "+") {

                int a = st.top();
                st.pop();

                int b = st.top();
                st.pop();

                int sum = a + b;

                st.push(b);   
                st.push(a);   
                st.push(sum);
            }

            else {
                st.push(stoi(it));
            }
        }

        int sum = 0;

        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};