class Solution {
public:
    int longestBalanced(string s) {
        int ans =1;
        for(int i =0;i<s.length();i++){
            unordered_map<char,int>mp;
           
            int v = -1;
            for(int j = i;j<s.length();j++){
                mp[s[j]]++;
                bool p = true;
                for(auto it:mp){
                    if(it.second == v || v==-1){
                        
                        v = it.second;
                    }
                    else{
                        p = false;
                       v =-1;
                       break;
                    }
                }
                v =-1;
                  if(p){
                    ans = max(ans,j-i+1);
                  }
            }
        }
        return ans;
    }
};