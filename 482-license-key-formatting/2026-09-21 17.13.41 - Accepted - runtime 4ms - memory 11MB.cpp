class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string str = "";

        for(auto it : s){
            if(it!='-') str+=toupper(it);
        }

        string ans = "";

        int cnt =0 ; 
        for(int i =str.size()-1; i>=0 ; i--){
            if(cnt==k){
                ans+='-';
                cnt=0 ; 
            }
             ans+=str[i];
            cnt++ ;
        }
        reverse(ans.begin(),ans.end());
        return ans ; 
    
    }
};