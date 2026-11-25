class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>f(101,0);
        for(auto it : nums){
            f[it]++;
        }
        vector<int>ans;
        while(ans.size()<nums.size()){
            for(int i=0 ; i<101 ;i++){
                 if (f[i] > 0) {
                    ans.push_back(i);
                    f[i]--;
                 }
            }
        }
        return ans ; 
    }
};