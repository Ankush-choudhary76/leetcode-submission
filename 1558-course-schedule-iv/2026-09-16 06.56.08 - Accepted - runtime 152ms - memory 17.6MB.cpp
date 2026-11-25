class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses,
                                     vector<vector<int>>& prerequisites,
                                     vector<vector<int>>& queries) {

        int n = numCourses;

        vector<vector<bool>> arr(n, vector<bool>(n, false));

        for (auto it : prerequisites) {

            int a = it[0];
            int b = it[1];

            arr[a][b] = true;
        }

        for (int k = 0; k < n; k++) {

            for (int i = 0; i < n; i++) {

                for (int j = 0; j < n; j++) {

                    arr[i][j] = arr[i][j] || (arr[i][k] && arr[k][j]);
                }
            }
        }

        vector<bool> ans;

        for (auto q : queries) {

            int u = q[0];
            int v = q[1];

            ans.push_back(arr[u][v]);
        }

        return ans;
    }
};