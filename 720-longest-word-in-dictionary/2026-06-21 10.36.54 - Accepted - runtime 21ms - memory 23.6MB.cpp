class Solution {
public:
    string longestWord(vector<string>& words) {
         sort(words.begin(), words.end());

        unordered_set<string> st;
        string ans = "";

        for(auto it : words){
            if(it.size()==1 || st.count( it.substr(0, it.size()-1))){
                
                st.insert(it);
                if (it.size() > ans.size())
                    ans = it ;
            }
        }
        return ans ; 
    }
};