class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       unordered_map<int, int>mpp;
       mpp[0] = -1; 
        
        int pre = 0;
        int maxi = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            pre += (nums[i] == 0) ? -1 : 1;
            
            if (mpp.find(pre) != mpp.end()) {
                maxi = max(maxi, i - mpp[pre]);
            } else {
                
                mpp[pre] = i;
            }
        }
        
        return maxi;
    }
};