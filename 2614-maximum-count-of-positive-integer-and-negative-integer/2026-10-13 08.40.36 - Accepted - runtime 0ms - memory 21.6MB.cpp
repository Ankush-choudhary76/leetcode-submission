class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int l=0 , r = nums.size()-1 ; 

        int pos =0 , neg= 0 ; 

        while(l <=r){
            int m = l+(r-l)/2 ; 
            if(nums[m]<=0){
                l = m+1 ;
            }else{
                r = m-1 ; 
            }
        }
        pos = nums.size() - l ; 
        l=0  ;
        r = nums.size()-1 ;  
         while(l <=r){
            int m = l+(r-l)/2 ; 
            if(nums[m] >= 0){
                r = m - 1 ;
            }else{
                l  = m + 1 ; 
            }
        }
        neg = r+1 ; 
        return max(pos , neg);
    }
};