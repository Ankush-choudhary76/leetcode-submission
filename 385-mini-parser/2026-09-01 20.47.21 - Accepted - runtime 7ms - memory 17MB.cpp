/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Constructor initializes an empty nested list.
 *     NestedInteger();
 *
 *     // Constructor initializes a single integer.
 *     NestedInteger(int value);
 *
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Set this NestedInteger to hold a single integer.
 *     void setInteger(int value);
 *
 *     // Set this NestedInteger to hold a nested list and adds a nested integer to it.
 *     void add(const NestedInteger &ni);
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class Solution {
public:
    NestedInteger deserialize(string s) {
        
        if (s[0] != '[') {
            return NestedInteger(stoi(s));
        }

        stack<NestedInteger> st;
        int n = 0;
        int si = 1;
        bool in = false;

        for (int i = 0; i < s.size(); i++) {
            
            if (s[i] == '[') {
                st.push(NestedInteger());
            }
            
            else if (s[i] == '-') {
                si = -1;
            }
            
            else if (isdigit(s[i])) {
                n = n * 10 + (s[i] - '0');
                in = true;
            }
            
            if ((s[i] == ',' || s[i] == ']') && in) {
                st.top().add(NestedInteger(si * n));

                n = 0;
                si = 1;
                in = false;
            }

            if (s[i] == ']' && st.size() > 1) {
                NestedInteger curr = st.top();
                st.pop();

                st.top().add(curr);
            }
        }

        return st.top();
    }
};