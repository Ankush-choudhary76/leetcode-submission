class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        
        vector<int> ans;

        int cnt  = 0;

        for (auto it  : seq) {

            if (it  == '(') {
                cnt++;
                ans.push_back(cnt % 2);
            }
            else {
                ans.push_back(cnt % 2);
                cnt--;
            }
        }

        return ans;
    }
};