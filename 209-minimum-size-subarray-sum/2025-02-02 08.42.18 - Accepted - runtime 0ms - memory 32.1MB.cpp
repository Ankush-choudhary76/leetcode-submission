class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0 ; 
        int n = nums.size() , mini_size = INT_MAX;
        int right = 0 , left = 0 ; 
       while(right<n){
            sum += nums[right];
            while( sum>=target){
             mini_size = min(mini_size , right-left+1);
               sum -=nums[left];
               left++;
            }
            right ++;
       }
       if(mini_size == INT_MAX) return 0 ; 
       return mini_size;
    }
};