class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int a =0 , b=0 ;
         for(auto it : nums){
            if(it<10)a+=it;
            b+=it;
        }
        int c = b-a;
        return a>c ||c>a ;
    }
};