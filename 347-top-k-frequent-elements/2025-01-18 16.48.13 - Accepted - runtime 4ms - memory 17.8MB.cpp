class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        vector<int> arr ; 
        for(auto it : nums){
            mpp[it]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it : mpp){
            pq.push({it.second , it.first});
        }
        for(int i= 0 ; i <k ; i++){
             auto it = pq.top();
            pq.pop();
            arr.push_back(it.second);
        }
        return arr ; 
    }
};