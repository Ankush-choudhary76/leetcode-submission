class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st ; 

        for(int i=0 ; i<s.size();i++){
              if(st.empty ()|| st.top().first!=s[i]){
                st.push({s[i],1});
              }else{
                auto it = st.top();
                st.pop();
                st.push({s[i],it.second+1});
              }
            if(st.top().second==k) st.pop();
        }
    string str="";
    while(!st.empty()){
            auto it = st.top();
            st.pop();
            while(it.second--){
                str.push_back(it.first);
            }
        }
        reverse(str.begin(), str.end());
        return str;

    }
};