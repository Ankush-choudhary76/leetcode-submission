class Solution {
public:
     int cnt =0 ; 
     bool iscont ( vector<int>& s  , vector<vector<int>>&adj){
       if(s.empty()) return false ; 
         if(s.size()==1) return true ; 

         unordered_set<int>st(s.begin() , s.end());
          unordered_set<int>vs;
         queue<int>q ; 
         q.push(s[0]);
         vs.insert(s[0]);

         int vt = 0 ; 
         while(!q.empty()){
             int cur = q.front();
             q.pop();
             vt++ ; 
             for(auto it : adj[cur]){
                 if(st.count(it)&& !vs.count(it)){
                      vs.insert(it);
                     q.push(it);
                 }
             }
         }
         return vt == s.size();
         
    }
    int evenSumSubgraphs(vector<int>& nums, vector<vector<int>>& edges) {
        int n = nums.size() ; 
        vector<vector<int>>adj(n);
        for(auto &it : edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        for(int i=1 ; i<(1<<n);i++){
            vector<int>s ; 
            long long  node = 0 ; 
            for(int j= 0 ; j<n;j++){
                if((i>>j)&1){
                    s.push_back(j);
                    node+=nums[j];
                }
            }
            if(node%2==0){
                if(iscont(s ,adj ))cnt++ ; 
            }
        }
    return cnt ; 
    }
};