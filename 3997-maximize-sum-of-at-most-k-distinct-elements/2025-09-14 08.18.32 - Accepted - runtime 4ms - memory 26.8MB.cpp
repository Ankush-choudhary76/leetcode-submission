class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end() , greater<int>());
        vector<int>arr ; 
        int val = 0  , cnt = 0 ;  
        for(int i= 0 ; i<nums.size();i++){
            if(nums[i]!=val){
                arr.push_back(nums[i]);
                val = nums[i];
                cnt++; 
            }
            if(cnt==k) break ; 
        }
        return arr ; 
        
    }
};