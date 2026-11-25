class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<char>st ;
         int cnt =0 ; 
        for(auto it : s){
             if(it==')'){
                cnt = st.top() + max(cnt * 2, 1);
                st.pop();
             }else{
                st.push(cnt);
                cnt =0 ;
             }
        }
        return cnt ; 
    }
};