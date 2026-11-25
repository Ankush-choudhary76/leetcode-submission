class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<int>st ; 
      int cnt =0 ; 

        for(auto it : s){
            if(it=='('){
                st.push(it);
                cnt++;
            }else{
                if(!st.empty()){
                    cnt--;
                    st.pop();
                }else{
                    cnt++ ; 
                }
            }
        }
        return cnt; 
    }
};