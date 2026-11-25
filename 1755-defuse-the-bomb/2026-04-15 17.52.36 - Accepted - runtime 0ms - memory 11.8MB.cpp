class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>v,y(n,0);
        if(k==0)
        return y;
        else if(k>0)
        {
            for(int i=0;i<code.size();i++)
            {
                int m=k,sum=0;
                while(m>0)
                {
                    sum+=code[(i+m)%n];
                    m--;
                }
                v.push_back(sum);
            }
            return v;
        }
        else
        {
           for(int i=0;i<code.size();i++)
            {
                int m=abs(k),sum=0;
                while(m>0)
                {
                    sum+=code[(n-m+i)%n];
                    m--;
                }
                v.push_back(sum);
            }
           return v;
        }
    }
};