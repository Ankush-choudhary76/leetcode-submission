class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt=0 ; 

        for(auto it : words){
            bool flag = true  ; 

             for(auto p : it){
                if(!allowed.contains(p)){
                    flag = false ; 
                    break  ; 
                }
             }
            if(flag) cnt++ ; 
        }
        return cnt ; 
    }
};