class Solution {
public:
    int maxFreqSum(string s) {
        vector<int>arr(26,0);
        for(auto it : s){
            arr[it-'a']++;
        }
        int maxiv = 0 ; 
        int maxic = 0 ; 
        for(auto it  : s){
            if(it=='a' || it=='e'||it=='o'|| it=='i' || it=='u'){
                maxiv = max (arr[it-'a'] , maxiv);
            }else{
                 maxic = max (arr[it-'a'] , maxic);
            }
        }
        return maxic + maxiv ; 
    }
};