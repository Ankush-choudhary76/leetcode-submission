class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int >mpp ;
        mpp[0]=1 ;
        int sum = 0 , cnt = 0  ;  
        for(auto it : nums){
            sum += it;
             sum = sum%k ;
             if(sum <0) sum+=k;
             cnt +=mpp[sum];
            mpp[sum]++;
        }
        return cnt ; 
    }
};