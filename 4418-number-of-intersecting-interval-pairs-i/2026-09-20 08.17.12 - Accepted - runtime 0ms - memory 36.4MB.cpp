class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& arr) {
        sort(arr.begin() , arr.end());
        int cnt =0 ; 

        for(int i=0 ; i<arr.size() ;i++){
            for(int j=i+1 ; j<arr.size() ;j++){
                if(arr[i][1]>=arr[j][0]){
                    cnt++ ;
                }
            }
        }
        return cnt ; 
    }
};