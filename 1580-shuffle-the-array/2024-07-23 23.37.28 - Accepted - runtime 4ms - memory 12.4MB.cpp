class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       int m = nums.size();
       vector<int>ans(m);
       for(int i=0 ; i<m/2;i++){
          ans[2*i] = nums[i];
          ans[2*i+1] = nums[n+i];
       } 
       return ans ;
    }
};