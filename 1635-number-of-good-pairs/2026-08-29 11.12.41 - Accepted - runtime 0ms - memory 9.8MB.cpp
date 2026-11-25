class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int ,int>mpp;

        int cnt =0 ; 
        for(auto it : nums){
            cnt+=mpp[it];
            mpp[it]++;
        }
        return cnt ; 
    }
};