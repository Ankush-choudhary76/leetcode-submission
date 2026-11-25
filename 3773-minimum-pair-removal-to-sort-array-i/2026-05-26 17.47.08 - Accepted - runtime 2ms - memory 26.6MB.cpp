class Solution {
public:
    bool isSorted(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] < nums[i-1]) return false;
        }
        return true;
    }
    
    int minimumPairRemoval(vector<int>& nums) {
        int ops = 0;
        
        while(!isSorted(nums)) {
            int id = 0;
            int mini = INT_MAX;
            
           
            for(int i = 0; i < nums.size()-1; i++) {
                int s = nums[i] + nums[i+1];
                if(s < mini) {
                    mini = s;
                    id = i;
                }
            }
            
           
            nums[id] = mini;
            nums.erase(nums.begin() + id + 1);
            ops++;
        }
        
        return ops;
    }
};