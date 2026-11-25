class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       sort(nums.begin() ,nums.end());
       int target = 1; 
       for(auto it : nums){
        if(it>0 && it==target ){
            target++;
        }else if(it > target){
            return target ; 
        }
       }
       return target ; 
    }
};