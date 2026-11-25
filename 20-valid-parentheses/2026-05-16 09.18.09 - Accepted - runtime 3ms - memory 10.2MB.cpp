class Solution {
public:
    bool isValid(string s) {
        stack<int>st ;
        for(auto it : s){
            if(it=='(' ||it=='['|| it=='{'){
                st.push(it);
            }else{
                if(st.empty()) return false ; 
                auto p = st.top();
                st.pop();
                if(it==')' && p=='(' ||it==']' && p=='['  || it=='}' && p=='{'  ){
                    continue ;
                }else{
                    return false ;
                }

            }
        }
        return st.size()==0;
    }
};