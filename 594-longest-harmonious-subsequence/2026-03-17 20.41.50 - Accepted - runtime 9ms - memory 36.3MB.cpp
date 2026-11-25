class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());

        int r =0 , l=0 , len = 0  ; 
        while(r<n){
                while(abs(nums[l]-nums[r])>1){
                    l++;
                }
                if(nums[l]!=nums[r]) len = max(r-l+1 , len);
                r++;
        }
        return len ; 
    }
};