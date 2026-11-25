class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int>arr(256 , 0);
        for(auto it : stones){
            arr[it]++; 
        }
        int cnt =0 ; 
        for(auto it : jewels){
            cnt+=arr[it];
        }
        return cnt ; 
    }
};