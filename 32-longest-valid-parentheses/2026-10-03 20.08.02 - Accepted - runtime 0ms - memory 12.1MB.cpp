class Solution {
public:
    int longestValidParentheses(string s) {
         int ans =0 ; 
         vector<int>arr= {-1}; 

         for(int i=0 ; i<s.size() ;i++){
            if(s[i]=='(') arr.push_back(i);
            else{
                arr.pop_back() ; 
                if(arr.empty()){
                    arr.push_back(i);
                }else{
                    ans = max(ans , i-arr.back());
                }
            }
         }
         return ans ; 
    }
};