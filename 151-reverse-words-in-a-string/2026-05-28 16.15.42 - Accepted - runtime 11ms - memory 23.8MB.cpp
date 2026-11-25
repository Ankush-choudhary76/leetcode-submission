class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word  , str="";
        while(ss>>word){
           if(str ==""){
             str=word;
           }else{
            str = word + " "+str ; 
           }
        }
     return str ;      
    }
};