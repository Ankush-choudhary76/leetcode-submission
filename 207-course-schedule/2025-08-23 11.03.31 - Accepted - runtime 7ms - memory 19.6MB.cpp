class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pr) {
           vector<int>adj[n];
           vector<int>indegree(n,0);
        for(auto it : pr){
             adj[it[1]].push_back(it[0]);
        }
        for(int i=0 ; i<n;i++){
            for(auto it : adj[i]){
                indegree[it]++;
            }
        }
        queue<int>q;
        for(int i=0 ; i<n;i++){
            if(indegree[i]==0) q.push(i);
        }
        int cnt = 0 ; 

        vector<int>topo;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            cnt++; 
            for(auto it : adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }         
        }
        return cnt== n  ;   
    }
};