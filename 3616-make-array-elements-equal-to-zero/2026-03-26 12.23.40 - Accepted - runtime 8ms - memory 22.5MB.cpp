class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size(); 

        vector<int>arr(n+1 , 0);
        for (int i = 0; i < n; i++) {
            arr[i + 1] = arr[i] + nums[i];
        }
        int ans =0 ; 
        for(int i =0 ; i<n ;i++){
            if(nums[i]==0){
            int l = arr[i];
            int r = arr[n]-arr[i+1];

            if(l==r) ans+=2 ;
            else if (abs(l-r)==1) ans++;
            }
            
        }
        return ans ; 
    }
};