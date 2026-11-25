class Solution {
public:
    int jump(vector<int>& nums) {
         int jump = 0, cur = 0, f = 0;

        for (int i = 0; i < nums.size() - 1; i++) { 
            f = max(f, i + nums[i]);
            if (i == cur) {
              
                jump++;

               
                cur = f;
            }
        }

       
        return jump;
    }
};