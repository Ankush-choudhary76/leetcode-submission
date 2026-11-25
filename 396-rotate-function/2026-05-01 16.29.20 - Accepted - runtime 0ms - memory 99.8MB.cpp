class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
         int sum=0;
        for(auto it:nums){
            sum+=it;
        }
        int n=nums.size();
        int cur=0;
        for(int i=0;i<n;i++){
            cur+=(i*nums[i]);
        }
        int maxi=cur;
        for(int i=0;i<n;i++){
            int diff=sum-n*(nums[n-i-1]);
            cur+=diff;
            maxi=max(maxi,cur);
        }
        return maxi;
    }
};