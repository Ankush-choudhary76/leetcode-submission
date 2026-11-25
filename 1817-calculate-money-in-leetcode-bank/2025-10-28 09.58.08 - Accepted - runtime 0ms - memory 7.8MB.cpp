class Solution {
public:
    int totalMoney(int n) {
       int cnt = 0 ; 
       int add=0 ; 
       for(int i=1 ; i<=n; i++){
            if(i%7 !=0){
           cnt += i%7+add ;
            }else{
              cnt += 7+add ;
              add++;
            }
        }
        return cnt ;     
    }
};