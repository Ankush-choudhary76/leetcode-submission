class Solution {
public:
    string reverseWords(string s) {
        string ans ="", str="";

        for(auto it : s){
            if(it==' '){
                reverse(str.begin(),str.end());
                ans+=str;
                ans+=it;
                str.clear();
            }else{
                str+=it;
            }
        }
        if(!str.empty()){
                reverse(str.begin(),str.end());
                ans+=str;
               str.clear();
        }
        return ans ; 
    }
};