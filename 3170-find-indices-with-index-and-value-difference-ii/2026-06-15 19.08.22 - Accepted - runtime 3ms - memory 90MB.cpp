class Solution {
public:
    vector<int> findIndices(vector<int>& v, int index, int value) {
        int n=v.size();
        vector<pair<int,int>>res(n);
        res[n-1].first=v[n-1];
        res[n-1].second=v[n-1];
        for(int i=n-2;i>=0;i--)
        {
            res[i].first=max(v[i],res[i+1].first);
            res[i].second=min(v[i],res[i+1].second);
        }
        vector<int>ans(2,-1);
        for(int i=0;i<n;i++)
        {
            int j=i+index;
            if(j<n && (abs(v[i]-res[j].first)>=value || abs(v[i]-res[j].second)>=value))
            {   
                
                ans[0]=i;
                for(int k=j;k<n;k++)
                {   
                    
                    if(abs(v[i]-v[k])>=value)
                    {
                        ans[1]=k;
                        break;
                    }
                }
                break;
            }
        }
        return ans;
    }
};