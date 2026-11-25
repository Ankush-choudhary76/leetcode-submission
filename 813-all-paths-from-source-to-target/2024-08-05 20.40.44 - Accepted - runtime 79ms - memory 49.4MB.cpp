class Solution {
public:
   void dfs (int node ,int target ,vector<int>&arr,vector<vector<int>>&ans , vector<vector<int>>adj  ){
    arr.push_back(node);
    if(node == target){
         ans.push_back(arr);
    }
    for(auto it :adj[node] ){
        dfs(it ,target, arr, ans , adj);
    }
    arr.pop_back();
   }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n= graph.size(), m = graph[0].size();
        vector<vector<int>>adj(n);
       for(int i=0 ;i<n;i++){
        for(auto v : graph[i]){
            adj[i].push_back(v);
        }
       }
        vector<int>arr;
        vector<vector<int>>ans ;
        dfs(0,n-1, arr , ans ,adj );
        return ans ;
    }
};