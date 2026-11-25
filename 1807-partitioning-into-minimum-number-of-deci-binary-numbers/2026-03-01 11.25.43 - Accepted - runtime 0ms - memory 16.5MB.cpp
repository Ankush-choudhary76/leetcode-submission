class Solution {
public:
    int minPartitions(string n) {
         int maxi=0;
        for(auto it  : n){
            if(maxi<it -'0'){
                maxi=it -'0';
            }
        }
        return maxi;
    }
};