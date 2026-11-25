class Solution {
public:
    bool dfs (int  node , int col ,vector<int>&colour,vector<int>adj[] ){
    colour[node]=col;
    for(auto it : adj[node]){
        if(colour[it]==0){
           if( dfs(it, -col,colour, adj) == false) return false ;
        }else if(colour[it]== col) return false ;
    }
    return true ;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int>adj[n+1];
        for(auto it : dislikes){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>colour(n+1,0);
        for(int i=1 ; i<=n;i++){
            if(colour[i]==0){
                if(dfs(i,1,colour, adj)==false) return false;
            }
        }
        return true;
    }
};