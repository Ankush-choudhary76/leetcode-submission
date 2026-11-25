class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
       vector<int>indegree(n,0);
       int m = edges[m].size();
       vector<int>arr;
      for (const auto& edge : edges) {
            indegree[edge[1]]++;
        }

        for(int i=0 ; i<n;i++){
        if(indegree[i]==0) arr.push_back(i);
       }
       return arr ;
    }
};