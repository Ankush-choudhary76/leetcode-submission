class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int cnt =0  ; 

        for (int i = 0; i < nums.size(); ++i) {
            int a  = nums[i] , b  = nums[i];
            
            for (int j = i; j < nums.size(); ++j) {
               a &= nums[j];
              b = min(b, nums[j]);

                if(a==b) cnt++ ; 
            }
        }
        return cnt ; 
    }
};