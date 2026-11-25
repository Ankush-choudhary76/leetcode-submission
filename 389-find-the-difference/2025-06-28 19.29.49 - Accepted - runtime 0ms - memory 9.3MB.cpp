class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>arr(26,0);
        for(auto it : s){
           arr[it-'a']++;
        }
        for(auto it : t){
           arr[it-'a']--;
        }
        char val ;
        for(int i= 0 ; i<26 ; i++){
          if(arr[i]!=0){
            val = i +'a';
          } 
        }
         
        
       return val ;  
    }
};