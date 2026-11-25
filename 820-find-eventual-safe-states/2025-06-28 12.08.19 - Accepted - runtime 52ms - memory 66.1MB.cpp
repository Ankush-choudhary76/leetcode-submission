class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>arr(n,0);
        vector<vector<int>>adj(n);
        for(int i= 0 ; i<n ; i++){
            for(auto it : graph[i]){
                adj[it].push_back(i);
                arr[i]++;
            }

        }
        queue<int>q ; 
        for(int i= 0  ; i<arr.size() ;i++){
            if(arr[i]==0){
              q.push(i);
            }
        }
        vector<int>brr;
        while(!q.empty()){
            auto node = q.front();
            q.pop();
           brr.push_back(node);
           for(auto it : adj[node]){
                 arr[it]--;
                 if(arr[it]==0){
                    q.push(it);
                 }   
           }
        }
        sort(brr.begin() , brr.end());
        return brr ; 

    }
};