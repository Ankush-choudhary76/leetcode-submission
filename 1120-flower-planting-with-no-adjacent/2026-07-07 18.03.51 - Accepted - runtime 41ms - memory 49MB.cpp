

class Solution {
void dfs(int node, vector<int>&ans, vector<vector<int>>&adj ){
    for(int i=1; i<=4; i++){
        int tak = false;
        for(auto it  : adj[node]){
            if(ans[it] == i){
                tak = true;
                break;
            }
        }
        if(tak==false){
            ans[node] = i;
            break;
        }
    }
    for(auto it  : adj[node]){
        if(ans[it]==-1){
            dfs(it,ans,adj);
        }
    }

}
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<vector<int>>adj(n+1);
        vector<int>ans(n+1,-1);
        for(auto it : paths){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        for(int i=1;i<=n; i++){
            if(ans[i]==-1){
                dfs(i,ans,adj);
            }
        }
        ans.erase(ans.begin());
        return ans; 
    }
};