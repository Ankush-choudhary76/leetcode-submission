class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int xor1 = 0 ;
        for(auto it : nums){
            mpp[it]++;
            if(mpp[it]==2) xor1 ^= it ;
        }
        return xor1 ;
    }
};