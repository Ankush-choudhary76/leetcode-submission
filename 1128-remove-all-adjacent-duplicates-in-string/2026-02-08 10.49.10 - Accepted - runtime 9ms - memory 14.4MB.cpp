class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st; 

        for(int i=0 ; i<s.size() ; i++){
            if(!st.empty()&& s[i]==st.top()){
                    st.pop();
            }else{
                st.push(s[i]);
            }
        }
        string str ="";
        int n = st.size();
        for(int i=0 ; i<n;i++){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin() , str.end());
        return str ;
    }
};