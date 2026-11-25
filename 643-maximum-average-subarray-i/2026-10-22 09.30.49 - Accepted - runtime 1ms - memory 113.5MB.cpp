class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double a = 0  , maxi=INT_MIN , sum=0; 
        int r=0 , l=0 , n = nums.size()  ; 
         while(r<n){
            sum+=nums[r] ; 
               if((r-l+1)==k){
                     a= sum/ k ; 
                    maxi = max(a , maxi) ; 
                    sum-=nums[l] ; 
                    l++ ; 
               }
               r++ ; 
        }
        return maxi ; 
    }
};