class Solution {
public:
    bool fun(int a , int b){
        int c =  __builtin_popcount(a);
        int d = __builtin_popcount(b);
        return c==d;
    }
    bool canSortArray(vector<int>& nums) {
        for(int i=1 ; i<nums.size();i++){
              int j=i;
              while(j>0 && nums[j]< nums[j-1] && fun(nums[j] , nums[j-1] )){
                             swap(nums[j-1] , nums[j]);
                             j--;
              }
        }
        bool flag  = true ;
        for(int i=0 ; i<nums.size()-1;i++){
              if(nums[i]>nums[i+1]){
                flag = false ;
                break ;
              }
        }
        return flag ; 
    }
};