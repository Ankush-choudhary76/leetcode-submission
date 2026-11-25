class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& arr) {
       vector<vector<int>>crr ;

        for(auto it : arr){
             reverse(it.begin() , it.end());
           vector<int>brr ;
            for(auto p : it ){
                if(p==1){
                 brr.push_back(0);

                }else{
                    brr.push_back(1);
                }
            }
            crr.push_back(brr );
        }
        return crr ; 
    }
};