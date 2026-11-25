class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int >temp = nums;
        sort(temp.begin(),temp.end());
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i=0 ; i <n;i++){
            if(mpp.find(temp[i])==mpp.end()) mpp[temp[i]] = i ;
        }
        vector<int>ans(n,0) ;
        for(int i=0 ; i<n;i++){
         ans[i]= mpp[nums[i]];
        }
        return ans ; 
    }
};