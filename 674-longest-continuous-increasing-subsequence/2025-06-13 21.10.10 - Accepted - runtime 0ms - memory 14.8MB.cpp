class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxi = 0 ;
        int cnt= 0; 
        int val =0 ;
        for(auto it : nums){
            if(it>val){
               cnt++;
               maxi = max(maxi,cnt);
               val = it ; 
            }else{
                val = it ;
                cnt  =1 ; 
            }
        }
        return maxi ; 
    }
};