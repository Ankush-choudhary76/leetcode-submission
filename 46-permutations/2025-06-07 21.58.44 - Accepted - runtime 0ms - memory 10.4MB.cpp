class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>>arr ; 
         int n = nums.size();
         int r =1 ; 
        for(int i=1 ; i<=n ; i++){
               r*= i ;
        }
        arr.push_back(nums);
        for(int i=2 ; i<=r ; i++){
            next_permutation(nums.begin(),nums.end());
            arr.push_back(nums);
        }
        return arr ; 
    }
};