class Solution {
public:
    int find(int x , vector<int>nums){
        int val = -1; 
        bool flag = false ; 
        for(int i =0 ; i<nums.size();i++){
           if(flag && nums[i]>x){
                val = nums[i];
                break ; 
           } 
          if(nums[i]==x){
            flag = true ; 
          }
        }
        return val;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int>arr; 
        for(auto it : nums1){
          int val = find(it , nums2);
          arr.push_back(val);
        }
        return arr ; 
    }
};