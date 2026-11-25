class Solution {
public:
    int smallestNumber(int n) {
        int ans = 0 ; 
        for(int i=1 ; i<=n ; i++){
            int a = 1<<i;
            if(a>n){
                ans = a-1; 
                break ; 
            }
        }
        
        return ans ; 
    }
};