class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = magazine.size();
        vector<int>arr(26,0);
        for(auto it :  magazine){
            arr[it-'a']++;
        }
        for(auto it :ransomNote ){
            if( arr[it-'a']==0){
                return false ; 
            }
            arr[it-'a']--;
        } 
         
    return true ; 
    }
};