class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n  = nums.size();
        int ele1 =0 , ele2 =0;
        for(int i=0 ; i<n ;i++){
            if(nums[i]>ele1){
                ele2 = ele1;
                ele1 = nums[i]-1;  
            }else if (nums[i] > ele2) ele2 = nums[i]-1;
        }
        return ele1*ele2;
    }
};