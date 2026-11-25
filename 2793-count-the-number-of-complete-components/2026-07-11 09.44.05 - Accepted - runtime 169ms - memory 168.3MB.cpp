class Solution {
public:
    int bfs(int node ,vector<vector<int>>adj , vector<int>&vis ){
        queue<int>q;
        q.push(node);
        vis[node] =1 ;
        int ver =0  ,  ds = 0 ;
        while(!q.empty()){
            auto it = q.front() ; 
            ver++ ; 
            q.pop(); 
            ds +=adj[it].size();
        for(auto p : adj[it] ){
            if(!vis[p]){
                vis[p]=1 ;
                 q.push(p);
            }
        }
          
        }
        int ed = ds/2 ; 
        return ed== (ver*(ver-1)/2);
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto it : edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        int cnt = 0 ; 
        vector<int>vis(n,0);
        for(int i=0 ; i<n;i++){
              if(!vis[i]){
                cnt+=bfs( i  , adj , vis);
              }
        }
        return cnt ; 
    }
};