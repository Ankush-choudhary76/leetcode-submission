class Solution {
    private:
    bool dfs(int node , int col , vector<int>&color, vector<int>adj[]){
        color[node] = col ;
        for(auto it : adj[node]){
            if(color[it]==-1){
                if(!dfs(it, !col , color, adj)) return false ;
            }else if(color[it]==col) return false ;
        }
        return true ;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>adj[n];
        for(int i=0 ; i<n;i++){
            for(auto it :graph[i]){
                adj[i].push_back(it);
            }
        }
        vector<int>color(n,-1);
        for(int i=0 ;i<n;i++){
            if(color[i]==-1){
                if(!dfs(i,0,color,adj)) return false;
            }
        }
        return true ;
    }
};