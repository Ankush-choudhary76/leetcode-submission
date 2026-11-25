class Solution {
public:
    int minOperations(vector<int>& nums) {
       vector<int> arr; 
         int cnt =0 ; 
        for(auto it : nums){
            while(!arr.empty() && arr.back()>it){
                arr.pop_back();
            }
            if(it==0) continue ; 
            if(arr.empty() || arr.back()<it){
                cnt++;
                arr.push_back(it);
            }
        }
        return cnt ; 
    }
};