class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int l =0  , r=1 ;
        long long sum =nums[r] ; 
        unordered_set<long long >st; 
        while(r<nums.size()){
                 sum += nums[r];
                if(r-l+1 >2){
                    sum -=nums[l];
                    l++;
                }
                if(st.find(sum)!= st.end()) return true ; 
                st.insert(sum);
                
            r++;
        }
        return false ; 
    }
};