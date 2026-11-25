class Solution {
public:
    long long sumAndMultiply(int n) {
        string str = to_string(n) ;
        int  x =0 ; 
        long long sum = 0 ; 
        for(auto it : str ){
              if(it!='0'){
                  x = x*10 + it-'0';
                  sum+=it-'0';
              }
        }
        return  sum*x ; 
    }
};