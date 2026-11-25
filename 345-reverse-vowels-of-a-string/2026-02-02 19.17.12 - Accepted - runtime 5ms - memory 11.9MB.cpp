class Solution {
public:
    string reverseVowels(string s) {
        stack<char>sk ; 
        set<char>st{'a','e' , 'i', 'o','u' , 'A','E' , 'I', 'O','U'};
        
        for(auto it : s ){
            if(st.find(it)!=st.end()) sk.push(it);
        }

        string str="";
         for(auto it : s ){
            if(st.find(it)!=st.end()){
                str+=sk.top();
                sk.pop();
            }else{
                str+=it;
            }
        }
        return str ; 
    }
};