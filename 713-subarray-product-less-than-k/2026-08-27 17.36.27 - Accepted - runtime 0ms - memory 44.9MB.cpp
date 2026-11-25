class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int l = 0 , r=0 , cnt=0 ,pro=1 ; 
        while(r<nums.size()){
            pro*=nums[r];
             while(pro>=k){
                pro/=nums[l];
                l++;
             }
            cnt+=(r-l+1);
            r++;
        }
        return cnt ; 

    }
};