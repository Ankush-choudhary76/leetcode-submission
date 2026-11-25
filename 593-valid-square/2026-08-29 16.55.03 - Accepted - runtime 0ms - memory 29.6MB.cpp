class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3,
                     vector<int>& p4) {
        int a = (p1[0] - p2[0]) * (p1[0] - p2[0]) +
                (p1[1] - p2[1]) * (p1[1] - p2[1]);
        int b = (p1[0] - p3[0]) * (p1[0] - p3[0]) +
                (p1[1] - p3[1]) * (p1[1] - p3[1]);
        int c = (p1[0] - p4[0]) * (p1[0] - p4[0]) +
                (p1[1] - p4[1]) * (p1[1] - p4[1]);
        int d = (p3[0] - p2[0]) * (p3[0] - p2[0]) +
                (p3[1] - p2[1]) * (p3[1] - p2[1]);
        int e = (p4[0] - p2[0]) * (p4[0] - p2[0]) +
                (p4[1] - p2[1]) * (p4[1] - p2[1]);
        int f = (p4[0] - p3[0]) * (p4[0] - p3[0]) +
                (p4[1] - p3[1]) * (p4[1] - p3[1]);

        vector<int> arr = {a, b, c, d, e, f};

        sort(arr.begin(), arr.end());

        if (arr[0] != 0 && arr[0] == arr[1] && arr[1] == arr[2] &&
            arr[2] == arr[3] && arr[4] == arr[5]) {

            if (arr[5] == 2 * arr[0]) {
                return true;
            }
        }

        return false;
    }
}
;