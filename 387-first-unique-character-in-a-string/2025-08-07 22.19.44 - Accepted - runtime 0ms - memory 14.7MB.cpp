class Solution {
public:
    int firstUniqChar(string s) {
      vector<int>arr(26,0);
      for(auto it : s){
        arr[it-'a']++;
      }  
       for(int i=0 ; i<s.size();i++){
        if(arr[s[i]-'a']==1) return i ; 
      } 
      return -1 ;  
    }
};