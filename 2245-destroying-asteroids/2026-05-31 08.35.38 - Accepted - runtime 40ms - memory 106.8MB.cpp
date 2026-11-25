class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& arr) {
         sort(arr.begin() , arr.end());
        long long  sum = mass ;
       for(int i=0 ; i<arr.size() ; i++){
                if(arr[i]>sum){
                    return false ; 
                }
            sum+=arr[i];   
       } 
       return true ; 

    }
};