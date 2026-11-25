class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n) , a="";
          long long sum = 0 ; 
        for(auto it : s ){
            if(it!='0'){ a+= it ; 
            sum +=(it-'0');
            }           
        }
        if(a== " ") return 0 ; 
        long long x = 0;
      
        for(auto it : a){
           x = x*10 + (it-'0');
            
        }
        return x* sum; 
    }
};