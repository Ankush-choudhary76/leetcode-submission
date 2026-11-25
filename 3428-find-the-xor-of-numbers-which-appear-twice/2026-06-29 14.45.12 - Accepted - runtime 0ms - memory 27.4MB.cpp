class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        vector<int>arr(51,0);
        for(auto it : nums){
            arr[it]++;
        }
        int sum = 0 ;
        for(int i =0 ; i<=50 ; i++){
            if(arr[i]>1){
            sum = sum ^ i ;
            }
        }
        return sum ; 
    }
};