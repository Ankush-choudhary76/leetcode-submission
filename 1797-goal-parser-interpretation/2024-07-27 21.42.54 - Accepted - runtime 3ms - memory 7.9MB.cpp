class Solution {
public:
    string interpret(string command) {
        string s="" ;
        for(int i=0 ;i<command.size();i++){
           if( command[i] == 'G'){
            s = s+ 'G';
           }else if( command[i] == '('){
            if(command[i+1]== 'a'){
                s = s+'a'+'l';
            }else s= s+ 'o';
           }
        }  
        return s ;
    }
};