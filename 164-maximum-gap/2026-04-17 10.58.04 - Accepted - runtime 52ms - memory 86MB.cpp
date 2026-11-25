class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int maxi = 0; 
        for(int i=0 ; i<nums.size()-1 ; i++){
            if(nums[i]<nums[i+1]){
            int sum =nums[i+1] - nums[i];
             maxi = max(abs(sum) , maxi);
            }
        }
        return maxi ; 
    }
};