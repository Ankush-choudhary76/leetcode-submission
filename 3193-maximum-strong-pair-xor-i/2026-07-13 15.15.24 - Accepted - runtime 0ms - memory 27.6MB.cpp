class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int maxi = 0 ; 
        for(int i=0 ; i< nums.size() ; i++){
            for(int j=i ; j<nums.size() ;j++ ){
                int a = nums[i] , b= nums[j];
                if(abs(a-b)<= min(a,b)){
                int val = a^b ;
                maxi = max(val , maxi);
                }
            }
        }
        return maxi ; 
    }
};