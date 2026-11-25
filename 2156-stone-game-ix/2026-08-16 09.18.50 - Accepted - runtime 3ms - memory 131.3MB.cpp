class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        vector<int>arr(3);
        for(auto it : stones){
            arr[it%3]++;
        }
        if(arr[0]%2==0){
            return arr[1]>0 && arr[2]>0;
        }
        return abs(arr[1]-arr[2])>2;
    }
};