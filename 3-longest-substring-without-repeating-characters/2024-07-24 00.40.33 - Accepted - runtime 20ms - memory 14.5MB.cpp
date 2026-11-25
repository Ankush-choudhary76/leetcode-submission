class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st ;
       int i=0 ; 
       int j =0 ;
       int maxi =0;
       while(i< s.size()){
        if(st.find(s[i])== st.end()){
            st.insert(s[i]);
            maxi = max(maxi , i-j+1);
            i++;
        }else{
          st.erase(s[j]);
         j++;
        }
       }
     
         return maxi ;
    }
};