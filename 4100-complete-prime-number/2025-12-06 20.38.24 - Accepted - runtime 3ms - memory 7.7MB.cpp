class Solution {
public:
    bool isp(int n ){
       if(n<=1) return false ; 
        if(n<=3 ) return true ; 
        if(n%2==0 || n%3==0) return false ; 
        for(int i=5 ; i*i<=n;i+=6){
            if(n%i==0 || n%(i+2)==0)return false ;
        }
        return true ; 
    }
    bool completePrime(int num) {
        int temp = num;
        while(temp>0){
            if(!isp(temp)){
                return false ; 
            }
            temp/=10;
        }
        long long  mod = 10 ; 
        while(true){
            int s = num% mod;
            if(!isp(s)) return false ; 
            if(num<mod) break ; 
            mod *=10 ;
        }
        return true ; 
    }
};