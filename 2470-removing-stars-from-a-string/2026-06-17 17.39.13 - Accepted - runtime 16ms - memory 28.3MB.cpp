class Solution {
public:
    string removeStars(string s) {
        string str = "";
        for(auto it : s){
            if(it=='*'){
                if(!str.empty()){
                    str.pop_back();
                }
            }
            else{
                str +=it ;
            }
        }
        return str ; 
    }
};