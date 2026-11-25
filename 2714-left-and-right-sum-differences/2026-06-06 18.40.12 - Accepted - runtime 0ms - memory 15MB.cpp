class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
         vector<int>arr(n,0);
        int l =0 , r =0 ; 
         for(int i=0 ; i<nums.size() ; i++){
            arr[i]=(abs(arr[i]-l));
            arr[n-i-1]=(abs(arr[n-i-1]-r));
            l+=nums[i];
            r+=nums[n-1-i];
         }
         return arr ; 

    }
};