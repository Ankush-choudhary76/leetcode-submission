class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long> result(n, 0);

        unordered_map<int, vector<int>> mpp;

        for (int i = 0; i < n; i++) {
            mpp[nums[i]].push_back(i);
        }

        for (auto it : mpp) {
            vector<int>& indices = it.second;
            int sz = indices.size();

            vector<long long> prefix(sz, 0);
            prefix[0] = indices[0];

            for (int i = 1; i < sz; i++) {
                prefix[i] = prefix[i - 1] + indices[i];
            }

            for (int i = 0; i < sz; i++) {
                int idx = indices[i];

                long long left =
                    (long long)indices[i] * i - (i > 0 ? prefix[i - 1] : 0);

                long long right = (prefix[sz - 1] - prefix[i]) -
                                  (long long)indices[i] * (sz - i - 1);

                result[idx] = left + right;
            }
        }

        return result;
    }
};