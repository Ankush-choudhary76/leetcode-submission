class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size()-1;
        bool flag = 0;
        for(int it : nums) {
            if(it > n) return false;
            if(st.find(it) != st.end()) {
                if(it != n || flag) return false;
                flag = 1;
            }
            st.insert(it);
        }
        return true;
    }
};