class Solution {
public:
    vector<vector<int>>adj; 
    vector<int>val , down , up , ans ; 
    void dfs(int u , int v){
        down[u]= val[u];
        for(auto it  : adj[u]){
            if(v==it )continue; 
            dfs(it, u );
            if(down[it]>0) down[u]+=down[it];
        }
    }
    void dfs2(int u , int v){
       int sum =0 ; 
        for(auto it  : adj[u]){
            if(v==it )continue; 
            if(down[it]>0) sum+=down[it];
        }
        ans[u]= val[u] + max(0 ,up[u])+sum;
        for(auto it : adj[u]){
        if(v==it) continue ; 
            int w = sum - max(0,down[it]);
            up[it] = val[u]+max(0,up[u])+w ;
            dfs2(it , u );
        }
    }
    vector<int> maxSubgraphScore(int n, vector<vector<int>>& edges, vector<int>& good) {
       adj.resize(n); 
         val.resize(n); 
         down.resize(n); 
         up.resize(n); 
         ans.resize(n); 

        for(auto it: edges){
            int a = it[0] , b= it[1];
            adj[a].push_back(b);
            adj[b].push_back(a); 
            
        }
        for(int i=0 ; i<n ; i++){
            val[i] = good[i]?1 : -1 ;
        }
        dfs(0 , -1);
        up[0]= 0 ;
        dfs2(0 , -1);
        return ans ; 
    }
};