class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
    int row = grid.size(),col = grid[0].size(), ans = 0;
        vector<vector<pair<int,int>>> count(row,vector<pair<int,int>>(col,{0,0}));

        for(int i=0;i<row;i++)
        {
            int left = 0,right = 0;
            for(int j=0;j<col;j++)
            {
                if((i-1)>=0){
                    count[i][j].first += count[i-1][j].first;
                    count[i][j].second += count[i-1][j].second;
                }
                if(grid[i][j] == 'X')   count[i][j].first++;
                if(grid[i][j] == 'Y')   count[i][j].second++;

                left += count[i][j].first;
                right += count[i][j].second;

                if(left>=1 && left == right) ans++;
            }
            cout<<endl;
        }
        return ans;
    }
};