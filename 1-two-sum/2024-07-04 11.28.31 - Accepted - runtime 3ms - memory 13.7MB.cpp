class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           int n =nums.size();
          map <int,int>mpp;
          for(int i =0 ;i<n;i++){
            int x = nums[i];
            int val = target - x ;
            if(mpp.find(val)!=mpp.end()){
                return {mpp[val],i};
            }
            mpp[x]= i;
          }
        return {};
    }
};