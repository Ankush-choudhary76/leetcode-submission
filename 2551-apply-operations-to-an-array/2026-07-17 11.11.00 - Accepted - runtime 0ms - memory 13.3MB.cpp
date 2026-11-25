class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
      bool flag = true ; 
      int j=-1 ;  
        for(int i=0 ; i<nums.size()-1 ; i++){
            if(nums[i]==nums[i+1]){
              long long val = 2LL * nums[i];
             nums[i] = (int)val;   
                nums[i+1]=0; 
            }
            if(nums[i]==0 && flag){
                 j=i ; 
                 flag = false ; 
            }
        }
        if(j==-1)return nums;

        for(int i=j+1 ; i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
        return nums ; 
    }
};