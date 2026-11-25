class Solution {
public:
    int convertTime(string current, string correct) {
        int cur = stoi(current.substr(0, 2)) * 60; 
        int tar = stoi(correct.substr(0, 2)) * 60; 
        cur += stoi(current.substr(3));
        tar += stoi(correct.substr(3));
        
        int ans = 0;
        vector<int>arr = {60, 15, 5, 1};
        while(cur != tar)
        {
            for(auto it :arr)
            {
                if(cur + it  <= tar)
                {
                    cur += it ;
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};