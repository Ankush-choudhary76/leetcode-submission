class Solution {
public:
    string decodeMessage(string key, string message) {
           int n = key.size();
           string str ;
           char val = 'a';
           map<char , char>mpp;
          for(auto it : key){
            if(it !=' ' && mpp.find(it)==mpp.end()){
                mpp[it] = val;
                val++;
            }
          }
           for(auto it : message){
               if(it ==' '){
                str +=' ';
               }else{
                str += mpp[it];
               }    
           } 
           return str ;    
    }
};