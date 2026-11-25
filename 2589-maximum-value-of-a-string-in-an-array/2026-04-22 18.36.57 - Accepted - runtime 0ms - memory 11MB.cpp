class Solution {
public:
    bool f(string s){
        for(auto it:s){
            if(isalpha(it)) return true;
        }
        return false;
    }
    int maximumValue(vector<string>& strs) {
        int n=strs.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(f(strs[i])) ans[i]=strs[i].size();
            else ans[i]=stoi(strs[i]);
        }
        int a=*max_element(ans.begin(),ans.end());
        return a;
    }
};