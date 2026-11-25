class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0; 
        unordered_set<int> st;

        for (auto it : nums) {
            st.insert(it);
        }

        int maxi = 1;
        for (auto it : st) {
            
            if (st.find(it - 1) == st.end()){
                int cnt = 1;
                int val = it;
            while (st.find(val + 1) != st.end()) {
                  val = val+1 ; 
                  cnt++ ; 
            }
            maxi = max(cnt , maxi);
            }
        }
        return maxi ; 
    }
};