class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.size(); 
        while(s.size()>2){
            string str="";
            for(int i=0 ; i<s.size()-1;i++){
                int a = s[i]-'a';
                int b = s[i+1]-'a';
                int r = (a+b)%10;
                str += r +'a';
            }
            s = str ; 
        }
        return s[0]==s[1];
    }
};