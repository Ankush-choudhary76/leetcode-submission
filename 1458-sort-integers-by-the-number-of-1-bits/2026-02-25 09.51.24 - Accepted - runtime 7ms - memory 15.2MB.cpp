class Solution {
public:
    vector<int> sortByBits(vector<int>& nums) {
        map<int,vector<int>>mpp; 
        for(int i=0. ; i<nums.size() ; i++){
            int val = __builtin_popcount(nums[i]);
            mpp[val].push_back(nums[i]);
        }
        vector<int>arr ; 
        for(auto it : mpp){
            sort(it.second.begin(), it.second.end());
            arr.insert(arr.end() , it.second.begin() , it.second.end());
        }
        return arr ; 
    }
};