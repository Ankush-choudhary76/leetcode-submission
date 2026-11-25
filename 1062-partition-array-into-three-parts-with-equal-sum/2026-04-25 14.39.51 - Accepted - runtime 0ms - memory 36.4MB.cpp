class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
       int tot = 0;
        for(auto it : arr) tot += it;
        if(tot % 3 != 0) return false;

        int partitions = 0;
        int sum = 0;
        for(int i = 0;i < arr.size();i++){
            sum += arr[i];
            if(sum == tot / 3){
                partitions++;
                sum = 0;
            }
        }
        return partitions >= 3;
    }
};