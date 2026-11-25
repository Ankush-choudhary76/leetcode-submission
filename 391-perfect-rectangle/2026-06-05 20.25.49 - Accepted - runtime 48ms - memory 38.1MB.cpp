class Solution {
public:
	bool isRectangleCover(vector<vector<int>>& rect) {
		map<pair<int,int>,int> mpp;
        for(auto it:rect){
            mpp[{it[0],it[1]}]++;
             mpp[{it[2],it[3]}]++;
             mpp[{it[0],it[3]}]--;
             mpp[{it[2],it[1]}]--;
        }
        int ans=0;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            if(it->second!=0){
                if(abs(it->second)!=1)return false;
                ans++;
            }
        }
        return ans==4;
    }
	
};