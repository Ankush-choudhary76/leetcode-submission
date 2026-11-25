class Solution {
public:
    int minOperations(vector<string>& logs) {
      vector<string>arr;
        for(auto it : logs){
            if(it=="../"){
                if(!arr.empty()) arr.pop_back();
            }else if (it=="./")continue ;
            else{
                arr.push_back(it);
            }
        }
       return arr.size();
    }
};