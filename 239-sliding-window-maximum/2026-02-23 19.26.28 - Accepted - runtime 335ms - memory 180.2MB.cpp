class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int ,int >mpp; 
         vector<int>arr ; 
        
        int l =0 , r =0 ; 
        while(r<nums.size()){
            mpp[nums[r]]++;
            if((r-l+1)==k){
                auto it = mpp.rbegin();
                arr.push_back(it->first);
                 mpp[nums[l]]--;

                if (mpp[nums[l]] == 0)
                mpp.erase(nums[l]);
               l++;
            }
            r++ ; 
        }
        return arr ;
    }
};