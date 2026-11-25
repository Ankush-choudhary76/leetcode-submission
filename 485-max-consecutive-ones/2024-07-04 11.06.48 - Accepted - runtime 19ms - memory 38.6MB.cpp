class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int max_number = 0;
        int count_one = 0;
        for(int i =0 ;i<nums.size();i++){
            if(nums[i]==1){
                count_one++;
                max_number = max(count_one , max_number);
            }else{
                count_one = 0 ;
            }
        }
        return max_number;
    }
};