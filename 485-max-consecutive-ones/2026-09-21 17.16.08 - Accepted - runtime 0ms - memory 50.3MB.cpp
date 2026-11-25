class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi =0 ; 
        int cnt =0 ; 
        for(auto it : nums){
            if(it== 0 ){
                maxi = max(cnt , maxi);
                cnt=0 ; 
            }else{
                cnt++ ; 
            }
        }
        maxi = max(cnt , maxi);
        return maxi ; 
    }
};