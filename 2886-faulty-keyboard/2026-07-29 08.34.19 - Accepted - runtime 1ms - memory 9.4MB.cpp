class Solution {
public:
    string finalString(string s) {
        string ans ="";
        for(auto it : s){
            if(!ans.empty() && it=='i'){
                reverse(ans.begin() , ans.end());
            }else{
                ans+=it ; 
            }
        }
         return ans ; 
    }
};