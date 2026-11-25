class Solution {
public:
    void dfs(int node, int target, vector<int>& path, vector<vector<int>>& ans, const vector<vector<int>>& adj) {
        path.push_back(node);
        if (node == target) {
            ans.push_back(path);
        } else {
            for (int next : adj[node]) {
                dfs(next, target, path, ans, adj);
            }
        }
        path.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> path;
        vector<vector<int>> ans;
        dfs(0, n - 1, path, ans, graph);
        return ans;
    }
};
