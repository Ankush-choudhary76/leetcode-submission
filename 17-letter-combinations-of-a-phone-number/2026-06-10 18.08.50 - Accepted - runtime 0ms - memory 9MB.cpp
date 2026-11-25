class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<int,string> mpp = {
            {2,"abc"},
            {3,"def"},
            {4,"ghi"},
            {5,"jkl"},
            {6,"mno"},
            {7,"pqrs"},
            {8,"tuv"},
            {9,"wxyz"}
        };

        vector<string> ans;
        int n = digits.size();

        if(n == 1){
            for(auto it : mpp[digits[0]-'0']){
                string temp = "";
                temp += it;
                ans.push_back(temp);
            }
        }
        else if(n == 2){
            for(int i = 0; i < mpp[digits[0]-'0'].size(); i++){
                for(int j = 0; j < mpp[digits[1]-'0'].size(); j++){
                    string temp = "";
                    temp += mpp[digits[0]-'0'][i];
                    temp += mpp[digits[1]-'0'][j];
                    ans.push_back(temp);
                }
            }
        }
        else if(n == 3){
            for(int i = 0; i < mpp[digits[0]-'0'].size(); i++){
                for(int j = 0; j < mpp[digits[1]-'0'].size(); j++){
                    for(int k = 0; k < mpp[digits[2]-'0'].size(); k++){
                        string temp = "";
                        temp += mpp[digits[0]-'0'][i];
                        temp += mpp[digits[1]-'0'][j];
                        temp += mpp[digits[2]-'0'][k];
                        ans.push_back(temp);
                    }
                }
            }
        }
        else{
            for(int i = 0; i < mpp[digits[0]-'0'].size(); i++){
                for(int j = 0; j < mpp[digits[1]-'0'].size(); j++){
                    for(int k = 0; k < mpp[digits[2]-'0'].size(); k++){
                        for(int l = 0; l < mpp[digits[3]-'0'].size(); l++){
                            string temp = "";
                            temp += mpp[digits[0]-'0'][i];
                            temp += mpp[digits[1]-'0'][j];
                            temp += mpp[digits[2]-'0'][k];
                            temp += mpp[digits[3]-'0'][l];
                            ans.push_back(temp);
                        }
                    }
                }
            }
        }

        return ans;
    }
};