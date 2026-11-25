class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();

        vector<vector<pair<int,int>>>adj(n);

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                if(i!=j){
                    int dig = abs(points[i][0]-points[j][0]) + abs(points[i][1]-points[j][1]);
                    adj[i].push_back({j , dig});
                }
            }
        }
        int tot = 0 ; 
        priority_queue<pair<int ,int >,vector<pair<int ,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});

        vector<int>mst(n , false);

        while(!pq.empty()){
             auto it = pq.top();
             pq.pop();
            int node = it.second;
            int  wt = it.first ; 
            if(mst[node]) continue ; 
            mst[node] = true ; 
            tot += wt ; 

            for(auto it : adj[node]){
                int no = it.first ; 
                int w = it.second ; 
                if(!mst[no]){
                    pq.push({w , no });
                }
            }
        }
        return tot; 
    }
};