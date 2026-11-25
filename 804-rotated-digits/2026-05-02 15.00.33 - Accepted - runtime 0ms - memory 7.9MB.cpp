class Solution {
public:
    bool fun(int x){
        bool flag = false ;
        while(x>0){
            int d = x%10 ; 
            if(d==3 || d==4 || d==7) return false ; 
            if(d==2 || d==5 || d==6 || d==9) flag = true ;

            x/=10 ; 
        }
        return flag;
    }
    int rotatedDigits(int n) {
        int cnt =0 ;
        for(int i=0 ; i<=n ;i++){
            if(fun(i))cnt++;
        }
        return cnt ; 
    }
};