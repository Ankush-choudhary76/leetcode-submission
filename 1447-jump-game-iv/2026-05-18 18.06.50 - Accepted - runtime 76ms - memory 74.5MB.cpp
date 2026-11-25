class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size() ; 
        if(n==1 ) return 0 ; 

        unordered_map<int, vector<int>> mpp;

        int st= 0 ; 
        for(int i=0 ; i<n;i++){
            mpp[arr[i]].push_back(i);
        }

        queue<int>q ; 
        q.push(0);

        while(!q.empty()){
            st++ ; 
            int t = q.size() ;

            for(int i=0 ; i<t;i++){
                 int j = q.front();
                 q.pop(); 
                
                 if(j-1>=0 && mpp.find(arr[j-1])!= mpp.end()){
                    q.push(j-1);
                 }
                 if(j+1 < n && mpp.find(arr[j+1]) != mpp.end()){
                    if(j+1 == n-1) return st;
                    q.push(j+1);
                }
                if(mpp.find(arr[j]) != mpp.end()){
                    for(auto it: mpp[arr[j]]){
                        if(it != j){
                            if(it == n-1) return st;
                            q.push(it);
                        }
                    }
                }
                mpp.erase(arr[j]);
            }
        }
        return st ; 
    }
};