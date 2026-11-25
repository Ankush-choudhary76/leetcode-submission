class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st{nums1.begin(), nums1.end()};
        unordered_set<int> st2{nums2.begin(), nums2.end()};
        vector<vector<int>> arr(2);
        for (auto it : st) {
            if (!st2.contains(it))
                arr[0].push_back(it);
        }
        for (auto it : st2) {
            if (!st.contains(it))
                arr[1].push_back(it);
        }
        return arr ; 
    }
};