class Solution {
    private:
    bool dfs(int node , vector<int>&vis,  vector<int>adj[]){
        vis[node]=1;
        for(auto it :adj[node]){
            if(vis[it]==0) {
                if(dfs(it, vis  , adj)) return true ;
            }else if(vis[it]==1) return true ;
        }
        vis[node]=2;
        return false ;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>adj[n];
         for(int i=0 ;i<n;i++){
            for(auto it : graph[i]){
                adj[i].push_back(it);
            }
         }
         vector<int>check(n,0);
         vector<int>vis(n,0);
         for(int i=0 ; i<n;i++){
            if(vis[i]==0){
                dfs(i , vis ,  adj);
            }
         }
         vector<int>ans;
         for(int i=0 ; i<n;i++){
            if(vis[i]==2) ans.push_back(i);
         }
         return ans ;
        }
};