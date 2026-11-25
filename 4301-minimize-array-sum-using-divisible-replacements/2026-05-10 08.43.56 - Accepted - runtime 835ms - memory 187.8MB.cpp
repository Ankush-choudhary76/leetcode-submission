class Solution {
public:
    long long minArraySum(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());

        long long ans = 0;
        for (auto it : nums) {
            int a = it;
            for (int i = 1; i * i <= it; i++) {
                if (it % i == 0) {
                    if (st.count(i)) {
                        a = min(a, i);
                    }
                    int b = it / i;
                    if (st.count(b)) {
                        a = min(a, b);
                    }
                }
               
            }
            ans += a;
         
        }
           return ans;
    }
};