class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
         vector<string> arr ;
         if(nums.empty()) return arr ; 
        int st = nums[0];
        for(int i=1 ; i<=nums.size();i++){
            if(i== nums.size() || nums[i]!=nums[i-1]+1){
                if(st == nums[i-1]){
                    arr.push_back(to_string(st));
                }else{
                    arr.push_back(to_string(st)+"->"+to_string(nums[i-1]));
                }
                if(i<nums.size()) st = nums[i];
            }
        }
        return arr ; 
    }
};