class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans ;
        int r =0 ;
        for(int i=0 ; i<nums.size();i++){
              r += nums[i];
              ans.push_back(r);
        }
        return ans ;
    }
};