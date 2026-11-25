class Solution {
public:

    int fun(int n ){

        vector<int>dp; 
        while(n >0){
            dp.push_back(n %10);
            n /=10;
        }
        reverse(dp.begin() , dp.end()); 
        int a = 0 ; 
        for(int i=0 ; i+2 <dp.size() ;i++ ){
            int k = dp[i] ,  l = dp[i+1] , m = dp[i+2]; 

            if((k<l && l>m) || (k>l && l<m)){
                a++; 
            }
        }
        return a ; 
    }
    int totalWaviness(int num1, int num2) {
        long long ans = 0 ; 
        for(int i= num1 ; i<=num2 ; i++){
            ans += fun(i);
        }
        return ans ; 
    }
};