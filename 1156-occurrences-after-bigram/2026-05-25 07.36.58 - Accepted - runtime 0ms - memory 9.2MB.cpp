class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
       
    vector<string> ans,strng;
        stringstream ss(text);
        string word;
        while(ss>>word){
            strng.push_back(word);
        }
        
        for(int i=0;i<strng.size()-2;++i){
            if(strng[i]==first && strng[i+1]==second){
                ans.push_back(strng[i+2]);
            }
        }
        return ans;
    }
};