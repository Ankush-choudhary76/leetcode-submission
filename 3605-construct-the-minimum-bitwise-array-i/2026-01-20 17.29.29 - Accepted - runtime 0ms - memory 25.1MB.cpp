class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;

        for (int x : nums) {
          
            if (x == 2) {
                ans.push_back(-1);
                continue;
            }

          
            int temp = x;
            int cnt = 0;
            while (temp & 1) {
                cnt++;
                temp >>= 1;
            }

            
            if (cnt == 0) {
                ans.push_back(-1);
            } else {
               
                int val = x - (1 << (cnt - 1));
                ans.push_back(val);
            }
        }

        return ans;
    }
};