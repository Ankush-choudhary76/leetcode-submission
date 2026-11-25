class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>arr ; 
        priority_queue<pair<long long ,long long >>pq ; 

        for(int i= 0 ; i<points.size() ;i++){
            int a = points[i][0];
            int b = points[i][1];
            long long  c = (a*a) + (b*b);
            pq.push({c,i});
            if(pq.size()>k) pq.pop();
        }
        while(!pq.empty()){
            auto it = pq.top() ; 
            pq.pop() ; 
            arr.push_back(points[it.second]);
        }
        return arr ; 
    }
};