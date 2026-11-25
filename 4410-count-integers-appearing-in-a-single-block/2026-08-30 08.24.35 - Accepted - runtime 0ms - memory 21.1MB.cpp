class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        vector<int>arr(101 ,0);
        vector<int>brr(101 ,0);

        for(int i=0 ; i<nums.size();i++){
            int a = nums[i];
            if(i>0 && arr[a] && nums[i-1]!=a){
                brr[a]=1;
            }
            arr[a]=1;
        }
        int ans =0 ;
        for(int i=1 ; i<=100 ;i++){
            if(arr[i] && !brr[i])ans++ ;
        }
        return ans ; 
    }
};