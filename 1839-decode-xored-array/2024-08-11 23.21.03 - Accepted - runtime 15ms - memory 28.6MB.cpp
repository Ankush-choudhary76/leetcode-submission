class Solution {
public:
    vector<int> decode(vector<int>& arr, int first) {
        vector<int>ans ;
        int r = first ;
        ans.push_back(r);
        for(int i=0 ; i<arr.size();i++){
            r = r^arr[i];
           ans.push_back(r);
        }
        return ans ;
    }
};