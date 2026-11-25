class Solution {
public:
    vector<int> arr  , brr;
    
    Solution(vector<int>& nums) {
        arr = nums ;
        brr= nums; 
    }
    
    vector<int> reset() {
        return arr ; 
    }
    
    vector<int> shuffle() {
       next_permutation(brr.begin() , brr.end()) ;
       return brr ; 
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */