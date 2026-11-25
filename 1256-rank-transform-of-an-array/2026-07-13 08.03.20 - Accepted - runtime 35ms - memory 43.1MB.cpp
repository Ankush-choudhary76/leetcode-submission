class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       vector<int>temp=arr;
       sort(arr.begin() , arr.end());
       unordered_map<int ,int>mpp;
       int i=1 ; 
       for(auto it : arr){
        if(mpp.find(it)==mpp.end()){
         mpp[it]=i++;
        }
       }
       for(auto &it : temp){
        it = mpp[it];
       }
    return temp ; 
    }
};