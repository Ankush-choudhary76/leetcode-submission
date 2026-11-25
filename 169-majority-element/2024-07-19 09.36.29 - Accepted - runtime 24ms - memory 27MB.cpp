class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int cnt  = 0 , ele = 0 ;
        int n = arr.size();
        for(int i=0 ; i<arr.size();i++){
            if(cnt == 0){
                cnt = 1 ;
                ele = arr[i];
            }else if( arr[i]== ele) cnt++;
            else cnt --;
        }
        int cnt1 =0;
        for(int i=0 ; i<arr.size();i++){
            if(arr[i]== ele) cnt++;
        }
        if(cnt> n/2) return ele;
        return -1 ;
    }
};