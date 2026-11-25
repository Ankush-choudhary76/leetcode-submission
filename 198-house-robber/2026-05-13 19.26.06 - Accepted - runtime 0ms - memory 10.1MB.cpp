class Solution {
public:
   
    int rob(vector<int>& nums) {
        int n = nums.size();
         int prev2 = 0 , prev = nums[0];
        
        for(int i = 1 ; i<n ; i++){
           int take = nums[i]+prev2;
          
           int nt = prev;

            int cur   = max(nt , take);
            prev2 = prev ; 
            prev = cur ; 
        }
        
        return  prev;
    }
};