class Solution {
public:
    int minimumPushes(string word) {
        int cnt=0;
        unordered_map<int,int>mp;

        int st=2;
        for(auto it :word){
            if(st>9){
                st=2;
            }
            mp[st]++;
            cnt+=mp[st];
            st++;
        }
        return cnt;
    }
};