class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int>mpp;
        int sum = 0 , cnt =0 ;
        mpp[0] = 1 ;
        for(int i=0 ; i<n;i++){
            sum  += nums[i];
            int  presum = sum - k ;
            cnt += mpp[presum];
            mpp[sum]++;
        }
     return cnt;

    }
};