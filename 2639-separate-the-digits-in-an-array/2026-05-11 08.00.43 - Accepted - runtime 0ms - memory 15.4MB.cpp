class Solution {
public:
   
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>arr ;
       for( auto &it : nums ){
            
            string tmp = to_string(it);
            
            for( auto p : tmp ) arr.push_back(p-'0');
            
        }
        return arr ; 
    }
};