class Solution {
public:
    int countStaircase(vector<int>& nums) {
          int n = nums.size();
          int ans = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<int, int> mpp;
            vector<int> arr;

            for (int j = i; j < n; j++) {
                int x = nums[j];

                if (mpp[x] == 0) {
                    arr.push_back(x);
                }
                mpp[x]++;

                bool flag = true;

                for (int p = 0; p < arr.size(); p++) {
                    if (mpp[arr[p]] != p + 1) {
                        flag = false;
                        break;
                    }
                }

                if (flag) {
                    ans++;
                }
            }
        }

        return ans;
    }
};