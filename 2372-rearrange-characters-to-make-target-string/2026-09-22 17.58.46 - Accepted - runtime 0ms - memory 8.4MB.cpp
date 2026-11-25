class Solution {
public:
    int rearrangeCharacters(string s, string target) {
          vector<int>arr(26,0) ; 
          for(auto it : s){
            arr[it-'a']++;
          }

          int ans = INT_MAX ;
          vector<int>brr(26,0);

          for(auto it : target){
            brr[it-'a']++;
          }
          for(auto it : target){
              ans = min(ans , arr[it-'a']/brr[it-'a']);
          }
        return ans ; 
    }
};