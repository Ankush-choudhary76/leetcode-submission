class Solution {
public:
    int minimumCost(vector<int>& cost) {
         sort(cost.begin(),cost.end());
        int tot =0;

        for(int i=cost.size()-1;i>=0;i-=3){
            tot += cost[i];
            if(i-1>=0) tot+=cost[i-1];
        }

        return tot;
    }
};