class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {

        int n = nums.size();

        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        vector<int> ans(n);

        int i = 0;

        while (i < n) {

            int e = i;

            while (e + 1 < n && arr[e + 1].first - arr[e].first <= limit) {
                e++;
            }

            vector<int> brr;

            for (int j = i; j <= e; j++) {
                brr.push_back(arr[j].second);
            }

            sort(brr.begin(), brr.end());

            for (int j = 0; j < brr.size(); j++) {
                ans[brr[j]] = arr[i + j].first;
            }

            i = e + 1;
        }

        return ans;
    }
};

