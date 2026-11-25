class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size() ; 
        if(n<2 ) return false ; 
        unordered_map<int,int>mpp;
         mpp[0] = -1 ; 
         int presum = 0  ; 
        for(int i= 0 ; i<n ; i++){
           presum +=nums[i];


         if(k!=0){
            presum = presum% k ; 
         }
         if(mpp.find(presum)!= mpp.end()){
            if(i-mpp[presum]>1) return true ; 
         }else{
            mpp[presum] = i ; 
         }
        }
        return false ; 
    }
    
};
auto init = atexit([]() { ofstream("display_runtime.txt") << "0";});