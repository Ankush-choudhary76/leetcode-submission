class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        if(n<=2 ) return -1 ; 
        int f =0 , s=0 ; 
       for(int i=0 ; i<n ;i++){
              if(f<nums[i]){
                s = f ;
                f = nums[i];
              }else if (f!=nums[i]&& s<nums[i]){
                s = nums[i];
              }
       }
       return  s ; 
    }
};