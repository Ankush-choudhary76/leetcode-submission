class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n = nums.size();
        if(k==0) return  n  ; 
        sort(nums.begin() , nums.end()) ; 
        if(k>= n ) return 0 ; 

        int bi = n-k ; 
        int bv = nums[bi]; 
        auto it = lower_bound(nums.begin() , nums.end(), bv ) ; 
        return it - nums.begin() ;  
    }
};