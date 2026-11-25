class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int>arr ;
        unordered_map<int , int>mpp;
        for(int i=0 ; i<nums.size() ; i++){
            int sum = target - nums[i];
            if(mpp.find(sum)!=mpp.end()){
                arr.push_back(mpp[sum]);
                arr.push_back(i);
                break ; 
            }
            mpp[nums[i]] = i ; 
        }
        return arr ; 
    }
};