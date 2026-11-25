class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = INT_MAX ; 
        for(auto it : nums){
            n = min(it , n);
        }
        int ans = 0 ; 
        for(auto it : nums){
            ans += it-n;

        }
        return ans ; 
    }
};