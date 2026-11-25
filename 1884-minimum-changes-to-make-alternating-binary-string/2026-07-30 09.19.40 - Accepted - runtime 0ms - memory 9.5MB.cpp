class Solution {
public:
    int minOperations(string s) {
        int f = 0,ans1=0,ans2=0;
        for(int i=0;i<s.size();i++){
            if(s[i]-'0' != f) {
                ans1++;
            }
            else{

                ans2++;
            }
            f= !f;
            
        }
        return min(ans1,ans2);
    }
};