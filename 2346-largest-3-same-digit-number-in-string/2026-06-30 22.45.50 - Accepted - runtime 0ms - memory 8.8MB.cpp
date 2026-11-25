class Solution {
public:
    string largestGoodInteger(string num) {
        string str ="";
        for(int i=0 ; i<=9 ;i++){
            string s ="";
            s.append(3,'0' + i);
            if(num.contains(s)){
                str = s ;
            }
        }
        return str ; 
    }
};