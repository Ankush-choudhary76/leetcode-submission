class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
       int t= INT_MAX ; 
        for(auto it : tasks){
            int a = it[0] + it[1];
            t = min(t ,a);
             
        }
        return t ;
    }
};