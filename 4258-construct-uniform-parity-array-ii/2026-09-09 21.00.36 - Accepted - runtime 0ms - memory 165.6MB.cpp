class Solution {
public:
    bool uniformArray(vector<int>& nums) {
    int mini = nums[0];
        bool odd = 0;

        for (auto it : nums) {
            mini = min(mini, it);
            odd |= it & 1;
        }

        return (mini & 1) == odd;
    }
};