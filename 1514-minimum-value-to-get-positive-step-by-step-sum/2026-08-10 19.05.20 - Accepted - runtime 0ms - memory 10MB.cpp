class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int pre = 0;
        int minPre= 0;
        
        for (auto it  : nums) {
            pre += it ;
            minPre = min(minPre, pre);
        }
        
        return 1 - minPre;
    }
};