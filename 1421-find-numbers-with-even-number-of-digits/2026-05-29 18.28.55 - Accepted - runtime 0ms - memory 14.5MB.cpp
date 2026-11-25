class Solution {
public:
    int fun(int n){
        string str = to_string(n);
        return str.size();
    }
    int findNumbers(vector<int>& nums) {
        int cnt =0 ; 
        for(auto it : nums){
            if(fun(it)%2==0){
                cnt++;
            }
        }
        return cnt ; 
    }
};