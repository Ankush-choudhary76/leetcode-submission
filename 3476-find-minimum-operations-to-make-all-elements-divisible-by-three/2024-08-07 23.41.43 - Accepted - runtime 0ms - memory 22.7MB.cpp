class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt =0 ; 
        for(auto it : nums){
            int r = it % 3 ;
            if(r !=0) cnt++;
        }
        return cnt ; 
    }
};