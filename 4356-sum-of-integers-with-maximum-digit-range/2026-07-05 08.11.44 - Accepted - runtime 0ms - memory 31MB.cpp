class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
      int maxi = -1 ; 
        int ans =0 ; 
        for(auto it : nums){
            int n = it , mx = 0 , mi = 9 ; 

            while(n){
                int d = n%10 ;
                mx = max(mx , d);
                mi = min(mi ,d);
                n/=10 ;
            }
            int r = mx - mi ; 
            if(r>maxi){
                maxi = r ; 
                ans = it;
            }else if(r ==maxi){
                ans+=it;
            }
        }
        return ans ; 
    }
};