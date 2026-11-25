class Solution {
public:
    int countKDifference(vector<int>& r , int k) {
       sort(r.begin(), r.end());
       int cnt =0;
       for(int i=0 ; i<r.size()-1;i++){
        int l = lower_bound(r.begin(), r.end(), r[i]+k)- r.begin();
        int u = upper_bound(r.begin(), r.end(), r[i]+k)- r.begin();
        cnt +=(u - l);
       }
       return cnt ;
    }
};