class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
      unordered_map<int ,bool > mpp;
        for(int i= 0 ; i<nums.size();i++){
            mpp[nums[i]] = true;
        }
    int cnt =0 ;
        for(int i=0 ; i<nums.size();i++){
           if(mpp[nums[i]-diff] && mpp[nums[i]+ diff]){
            cnt++;
           }
        }
        return cnt ; 
    }
};