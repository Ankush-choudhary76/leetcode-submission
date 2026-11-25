class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int maxi = 0 ; 
        for(int i=0 ; i< nums.size() ; i++){
            for(int j=i ; j<nums.size() ;j++ ){
                if(abs(nums[i]-nums[j])<= min(nums[i], nums[j])){
                int val = nums[i]^nums[j];
                maxi = max(val , maxi);
                }
            }
        }
        return maxi ; 
    }
};