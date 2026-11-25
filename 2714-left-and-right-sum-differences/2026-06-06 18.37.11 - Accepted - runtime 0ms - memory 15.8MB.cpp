class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
         vector<int>left, right(n,0), arr ; 
        int l =0 , r =0 ; 
         for(int i=0 ; i<nums.size() ; i++){
            left.push_back(l);
            l+=nums[i];
            right[n-1-i] = r;
            r+=nums[n-1-i];
         }
        for(int i=0 ; i<nums.size() ; i++){
            arr.push_back(abs(left[i]-right[i]));
         }
         return arr ; 

    }
};