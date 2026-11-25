class Solution {
public:
     int refw(int n ){
         int r = 0; 
         while(n>0){
             r = (r<<1) | (n&1);
             n>>=1 ; 
         }
         return r ; 
     }
    vector<int> sortByReflection(vector<int>& nums) {
     int n = nums.size();
        vector<pair<int,int>>v;
        v.reserve(n);
        for(auto  a : nums){
            int ref = refw(a);
            v.push_back({ref,a});
        }
        sort(v.begin(), v.end());
        vector<int>ans ; 
        ans.reserve(n);
        for(auto it : v){
            ans.push_back(it.second);
        }
        return ans ; 
    }
};