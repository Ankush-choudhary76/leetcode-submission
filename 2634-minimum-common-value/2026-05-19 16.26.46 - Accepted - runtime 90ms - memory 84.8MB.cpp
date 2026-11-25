class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int ,int >mpp;

        for(int i=0 ; i<nums1.size();i++){
            if(i>0 && nums1[i]==nums1[i-1]  ) continue ; 
            mpp[nums1[i]]++;
        }
         for(int i=0 ; i<nums2.size();i++){
            if( i>0 && nums2[i]==nums2[i-1]) continue ; 
            mpp[nums2[i]]++;
        }
        int mini =INT_MAX ; 
        for(auto it : mpp){
            if(it.second>1) mini = min(mini , it.first );
        }
        return mini==INT_MAX ? -1 : mini ; 
    }
};