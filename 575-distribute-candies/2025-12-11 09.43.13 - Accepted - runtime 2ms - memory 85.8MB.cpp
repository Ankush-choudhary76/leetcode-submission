class Solution {
public:
    int distributeCandies(vector<int>& a) {
       bool vis[200001] = {0};
        int cnt = 0;
        for (int i : a)
            if (!vis[i + 100000]) {
                vis[i + 100000] = 1;
                cnt++;
            }
        return min(cnt,(int) a.size()/2);
    }
};