class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>st;
        st.insert(nums);
        int fact = 1 ; 
        for(int i=1 ; i<=nums.size();i++){
             fact*=i;
        }
        for(int i=2 ; i<=fact;i++){
            next_permutation(nums.begin() , nums.end());
            
             st.insert(nums);
        }
        vector<vector<int>>v(st.begin() , st.end());
        return v;
    }
};