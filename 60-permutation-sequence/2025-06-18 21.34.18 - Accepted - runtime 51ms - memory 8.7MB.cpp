class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>arr; 
        for(int i=1 ; i<=n ; i++){
            arr.push_back(i);
        } 
        for(int i = 2 ; i<=k ; i++ ){
        next_permutation(arr.begin() , arr.end() );
        }
        string str = "";
        for(auto it : arr ){
        str += to_string(it);
        }
        return str ; 
    }
};