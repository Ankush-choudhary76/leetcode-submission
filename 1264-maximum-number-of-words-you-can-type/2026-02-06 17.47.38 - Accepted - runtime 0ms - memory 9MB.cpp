class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
         unordered_set<char>st ;
          for(auto it :brokenLetters ){
            st.insert(it);
        }
        int res = 0; 
        bool flag =
            true;  
        for (auto  it  : text) {
            if (it  == ' ') {
               
                if (flag) {
                    res++;
                }
                flag = true;
            } else if (st.count(it)) {
               
                flag = false;
            }
        }
       
        if (flag) {
            res++;
        }
        return res;
    }
};