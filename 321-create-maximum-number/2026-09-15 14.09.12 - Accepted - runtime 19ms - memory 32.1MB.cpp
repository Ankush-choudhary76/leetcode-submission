class Solution {
public:
    vector<int> fun(vector<int>& nums, int k) {
        vector<int> st;
        int r = nums.size() - k;

        for (auto it : nums) {
            while (!st.empty() && r > 0 && st.back() < it ) {
                st.pop_back();
                r--;
            }

            st.push_back(it);
        }

        while (st.size() > k) {
            st.pop_back();
        }

        return st;
    }

    bool check(vector<int>& a, int i, vector<int>& b, int j) {
        while (i < a.size() && j < b.size()) {
            if (a[i] != b[j]) {
                return a[i] > b[j];
            }

            i++;
            j++;
        }

        return i < a.size();
    }

    vector<int> merge(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        int i = 0, j = 0;

        while (i < a.size() || j < b.size()) {
            if (check(a, i, b, j)) {
                ans.push_back(a[i]);
                i++;
            } else {
                ans.push_back(b[j]);
                j++;
            }
        }

        return ans;
    }

    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<int> ans;

        int m = nums1.size();
        int n = nums2.size();

        for (int i = max(0, k - n); i <= min(k, m); i++) {
            int j = k - i;

            vector<int> a = fun(nums1, i);
            vector<int> b = fun(nums2, j);

            vector<int> temp = merge(a, b);

            if (temp > ans) {
                ans = temp;
            }
        }

        return ans;
    }
};