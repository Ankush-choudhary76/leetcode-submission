class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tot= accumulate(nums.begin() , nums.end() , 0);
        int left = 0 ; 
        for(int i=0 ; i<nums.size() ; i++){
            int right = tot - (left+nums[i]);
             if(right == left){
                return i ; 
             }
            left += nums[i];
        }
        return -1 ; 
    }
};