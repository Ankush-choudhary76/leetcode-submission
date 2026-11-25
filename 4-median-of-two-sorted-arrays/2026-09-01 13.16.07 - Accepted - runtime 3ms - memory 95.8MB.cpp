class Solution {
public:
   
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
        int n = nums1.size();
        int m = nums2.size();

      
        vector<int> arr;
        for (int i = 0; i < n; i++) {
            arr.push_back(nums1[i]);
        }
        for (int i = 0; i < m; i++) {
             arr.push_back(nums2[i]);
        }

      
        sort( arr.begin(),  arr.end());

    
        int tot =  arr.size();

        if (tot % 2 == 1) {
           
            return static_cast<double>(arr[tot / 2]);
        } else {
           
            int m1 = arr[tot / 2 - 1];
            int m2 = arr[tot / 2];
            return (static_cast<double>(m1) + static_cast<double>(m2)) / 2.0;
        }
    }
};