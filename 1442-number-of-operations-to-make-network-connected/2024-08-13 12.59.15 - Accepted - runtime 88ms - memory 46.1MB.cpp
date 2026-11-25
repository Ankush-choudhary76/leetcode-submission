class disjointset {
    public:
    vector<int>size,parent;
    disjointset(int n ){
        size.resize(n+1);
        parent.resize(n+1);
        for(int i=0 ; i<=n;i++){
            size[i]=1;
            parent[i]= i ;
        }
    }    
         int findupr(int node){
            if(parent[node] == node) return node;
            return parent[node] = findupr(parent[node]);
         }
         void unionbysize(int n ,int m ){
            int u = findupr(n);
            int v = findupr(m);
            if(u == v) return ;
            if (size[u]<size[v]){
                parent[u] = v ;
                size[v] += size[u]; 
            }else{
                parent[v] = u;
                size[u] += size[v]; 
            }
         }
    
};
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        disjointset ds(n);
        int cnt =0 ;
        for(auto it : connections){
            int node = it[0];
            int adjnode = it[1];
            if(ds.findupr(node)==ds.findupr(adjnode)){
                cnt++;
            }else{
               ds.unionbysize(node , adjnode);
            }
        }
        int cntc =0 ;
        for(int i=0 ; i<n;i++){
            if(ds.parent[i]==i) cntc++;
        }
        int ans  = cntc-1;
        if(cnt >= ans) return ans ;
        return -1 ;
    }
};