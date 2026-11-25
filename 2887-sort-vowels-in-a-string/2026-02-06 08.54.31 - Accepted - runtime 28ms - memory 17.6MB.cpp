class Solution {
public:
      
    string sortVowels(string s) {
    
          set<char>st={'a','e','o','i','u','A','E','I','O','U'}; 
          string a="";
          for(auto it : s){
            if(st.find(it)!=st.end()){
                a+=it;
            }
          }
        sort(a.begin() , a.end());
         int j = 0 ;
        for(int i=0 ; i<s.size();i++){
            if(st.find(s[i])!=st.end()){
               s[i] = a[j];
                j++;

            }
        }
        return s ; 
    }
};