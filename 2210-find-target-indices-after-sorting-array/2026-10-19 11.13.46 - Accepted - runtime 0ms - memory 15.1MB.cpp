class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int s= 0  , cnt =0 ; 
          vector<int>ans ; 
       for(auto it : nums){
         if(it==target) cnt++ ;
         if(it<target) s++ ; 
        }
        while(cnt--){
             ans.push_back(s++); 
        }
        return ans ; 
    }
};