class Solution {
public:
    bool check(string str){
    int a= str[0];
     int b = str[1];
     if(a%2==0 && b%2!=0)return true ;
     if(a%2!=0 && b%2==0)return true ;
     return false  ; 

    }
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        if(check(coordinate1)==check(coordinate2)) return true ; 
        return false ; 
    }
};