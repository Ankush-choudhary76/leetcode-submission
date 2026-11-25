class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum =0 ; 
        for(auto it : nums){
                int val = 0 , cnt=0  , maxi= 0 ;
               while(it>0){
                  int t  = it%10 ;
                  maxi = max(maxi ,t ) ;
                  it/=10; 
                  cnt++ ; 
                }
                int s = 0 ; 
                for(int i=0; i<cnt ; i++){
                    s= s*10 + maxi ;
                } 
                sum+=s ; 
            
        }
        return sum ; 
    }
};