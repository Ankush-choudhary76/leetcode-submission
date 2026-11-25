class Solution {
public:
 
    string frequencySort(string s) {
        vector<int>arr(256,0) ; 
        for(auto it:s ){
            arr[it]++;
        }
        priority_queue<pair<int,char>>pq ; 
        for(int i=0 ; i<256 ; i++){
            if(arr[i]!=0){
                 pq.push({arr[i], (char)i});
            }
        }
     
        string ans = "";

        while(!pq.empty()) {
            auto [count, ch] = pq.top();
            pq.pop();

            ans.append(count, ch);
        }
        return ans ; 
    }
};