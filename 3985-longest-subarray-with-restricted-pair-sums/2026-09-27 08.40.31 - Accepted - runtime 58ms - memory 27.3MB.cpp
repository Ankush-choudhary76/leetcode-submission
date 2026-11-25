class Solution {
public:
    int maxSubarray(vector<int>& nums) {

        int n = nums.size();
        vector<int> arr(501, 0);

        int left = 0;
        int right = 0;
        int ans = 0;

        auto iv = [&](int x) {
            for (int a = 1; a < x; a++) {
                int b = x - a;

                if (a == b) {
                    if (arr[a] >= 2)
                        return true;
                } else {
                    if (arr[a] > 0 && arr[b] > 0)
                        return true;
                }
            }

            for (int a = 1; a + x <= 500; a++) {
                int b = a + x;

                if (arr[a] > 0 && arr[b] > 0)
                    return true;
            }

            return false;
        };

        while (right < n) {
            int x = nums[right];

            while (iv(x)) {
                arr[nums[left]]--;
                left++;
            }

            arr[x]++;
            ans = max(ans, right - left + 1);
            right++;
        }

        return ans;
    }
};