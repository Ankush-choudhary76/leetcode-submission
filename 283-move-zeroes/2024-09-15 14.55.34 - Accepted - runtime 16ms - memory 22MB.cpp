class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0 ;
        for(int i =0 ; i <nums.size();i++){
            if(nums[i]==0){
             j= i ;
              break ;
            }  
        }
        for(int i = j+1; i < nums.size() ; i++){
            if(nums[i]!= 0 && nums[j]==0 ){
                swap(nums[i] , nums[j]);
                j++;
            }
        }
    }
};