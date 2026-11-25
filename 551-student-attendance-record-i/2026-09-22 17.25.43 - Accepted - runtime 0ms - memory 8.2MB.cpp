class Solution {
public:
    bool checkRecord(string s) {
       int a =0 ,l =0 ; 

       for(auto it : s){
        if(it=='A'){
            a++ ;  
            if(a==2) return false ;
            l=0 ; 
        }else if (it=='L'){
            l++; 
            if(l==3) return false ; 
        }else{
            l=0 ; 
        }

       } 
       return true ; 
    }
};