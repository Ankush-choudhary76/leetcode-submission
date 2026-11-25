class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>&a) {
        int ans =0;
        for (int i=0 ; i<a.size();i++){
           if(a[i]== "RIGHT" ){
            ans = ans +1;
           }else if(a[i]== "LEFT" && ans >=0 ){
            ans = ans -1;
           }else if(a[i]== "UP" && ans>=0){
            ans = ans - n ;
           }else if(a[i]== "DOWN"){
            ans = ans +n;
           }
        }
        return ans ;
    }
};