class Solution {
public:
   
     void fun(int ind ,set<vector<int>>&st , vector<int>& nums , vector<int>&temp ){
        int n = nums.size();
        if(ind >=n){
             if(temp.size()>=2){
                  st.insert(temp);
            }
            return ; 
        }
        
        if(!temp.size() || nums[ind]>=temp.back()){
             temp.push_back(nums[ind]);
             fun(ind+1,st , nums,temp);
            temp.pop_back();
        }
        fun(ind+1,st , nums,temp);
     }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>>st;
         vector<int>temp;
        fun(0 , st , nums ,temp ); 
      vector<vector<int>>arr{st.begin() , st.end()};
      return arr ; 
    }
};