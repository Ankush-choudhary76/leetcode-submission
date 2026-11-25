class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size() ,  low=1 , high = n-2 ; 
       if(arr[0]>arr[1]) return arr[0];
       if(arr[n-2]<arr[n-1]) return arr[n-1];

       while(low<= high){
        int mid = (low + high)/2 ; 
        if(arr[mid-1]<arr[mid]&& arr[mid]>arr[mid+1]) return mid ; 
        if(arr[mid-1]<arr[mid]){
            low = mid+1;
        }else{
            high = mid-1 ; 
        }
       }
    return -1 ; 
    }
};