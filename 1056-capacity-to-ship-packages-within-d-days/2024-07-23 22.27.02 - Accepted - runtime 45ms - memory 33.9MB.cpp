class Solution {
public:
     int findday(vector<int>&weight , int cap){
        int n = weight.size();
        int cntday = 1 ; long long load = 0 ;
        for(int i=0 ; i<n;i++){
            if(load + weight[i] > cap ){
                cntday ++ ;
                load = weight[i];
            }else  load += weight[i];
        }
        return cntday ;
     }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid = (low + high)/2;
            if(findday(weights ,mid ) <=days){
                high = mid -1 ;
            }else low = mid +1 ;
        }
        return low ;
    }
};