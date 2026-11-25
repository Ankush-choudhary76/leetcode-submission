class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int>ans ; 

        unordered_map< string ,int>mpp;
        for (auto it : words) mpp[it]++;
        int n = s.size();
        int wordlen = words[0].size();
        int winlen = wordlen * words.size();

        for(int i=0 ; i<wordlen;i++){
            int left = i, right =i, mt=0 ;
             unordered_map<string ,int >cpp;
            while(right <n){
                string str = s.substr(right, wordlen);
                if(mpp.count(str)){
                    mt++;
                    cpp[str]++;
                    while(cpp[str]>mpp[str]){
                        string ls = s.substr(left, wordlen);
                        cpp[ls]--;
                        left += wordlen;
                        mt--;
                    }
                    if (mt == words.size()) {
                        ans.push_back(left);
                    }
                }else{
                    cpp.clear();
                    mt = 0;
                    left = right + wordlen;
                }
                right += wordlen;
            }
        }
        return ans ;
    }
};