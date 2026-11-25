class Solution {
public:
     static bool comp(pair<string , int>a , pair<string , int >b){
        if(a.second==b.second){
            return a.first < b.first ;
        }
        return a.second>b.second;
     }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string , int>mpp;
        for(auto it : words){
            mpp[it]++;
        }
        vector<pair<string ,  int>>arr;
        for (auto it : mpp) {
            arr.push_back({it.first, it.second});
        }
        sort(arr.begin() , arr.end() , comp);
        vector<string> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};