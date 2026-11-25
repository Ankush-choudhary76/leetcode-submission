class Solution {
public:
    string defangIPaddr(string address) {
        string str ;
        for(auto it : address){
            if(it == '.'){
                str+="[.]";
            }else{
                str+= it;
            }
        }
        return str ;
    }
};