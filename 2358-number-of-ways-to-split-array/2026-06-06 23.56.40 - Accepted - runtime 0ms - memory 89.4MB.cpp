class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long total=0;
        for(int it:nums){
            total+=it;
        }
       long long  left=0  , cnt=0 ; 
        for(int i=0;i<nums.size()-1;i++){
            left+=nums[i];
            long long right=total-left;
            if(right<=left){
                cnt++;
            }
            
        }
        return (int)cnt;
    }
};