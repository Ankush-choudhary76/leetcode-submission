class Solution {
public:
   
    int largestPrime(int n) {
        vector<bool>isp(n+1, true );
        if(n>=0) isp[0]= false ; 
        if(n>=1 ) isp[1] = false ; 
        for(int i=2 ; i*i<=n;i++){
            if(isp[i]){
                for(int j = i*i; j<=n; j+=i) isp[j]= false ; 
            }
        }
        vector<int>primes ; 
        for(int i=2 ; i<=n;i++){
           if(isp[i]) primes.push_back(i);
        }
        long long sum = 0 ; 
         int ans =0 ; 
        for(auto it : primes){
            sum+=it ; 
            if(sum > n )break ; 
            if(isp[sum])ans = sum ; 
        }
        return ans ; 
    }
};