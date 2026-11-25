class Solution {
public:
    int fun(vector<int>& nums , int a , int n ){
       int prev2 = 0 , prev1=nums[a];
        for(int i=a+1 ; i<n;i++){
            int take = prev2+nums[i];
            int nt = prev1 ; 
            int cur = max(take , nt);
            prev2 = prev1 ; 
            prev1 = cur;
        }
        return prev1 ; 
    }
    int rob(vector<int>& nums) {
        int n = nums.size() ; 
        if(n==1) return nums[0];
        int f = fun(nums , 0, n-1);
        int v = fun(nums , 1 , n );
        return max(f,v);
    }
};