class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& op) {
        unordered_map<int,int>mpp;
    for(int i=0;i<nums.size();i++) {
        mpp[nums[i]]=i;
    }
    for(auto it :op){
        nums[mpp[it[0]]]= it[1];          
        mpp[it[1]]= mpp[it[0]];      
    }
    return nums;
    }
};