class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int mini = INT_MAX;
         vector<vector<int>> brr ; 
        for(int i=1 ; i<arr.size() ;i++){
            int a = abs(arr[i-1]-arr[i]);
            mini = min(a , mini);
        }
        for(int i=1 ; i<arr.size() ; i++){
             int a = abs(arr[i-1]-arr[i]);
            if(a==mini){
                brr.push_back({arr[i-1], arr[i]});
            }
        }
        return brr ; 
    }
};