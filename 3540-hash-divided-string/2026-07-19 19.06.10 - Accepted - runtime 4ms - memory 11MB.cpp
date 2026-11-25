class Solution {
public:
    string stringHash(string s, int k) {
        string str="";
        int cnt =0 , sum=0 ; 
        for(auto it : s){
            cnt ++ ; 
            sum+= it-'a';
            if(cnt==k){
              int val = sum%26 ;
              str+= val+'a';
              cnt=0 ; 
              sum=0;
            }
        }
        return str ; 
    }
};