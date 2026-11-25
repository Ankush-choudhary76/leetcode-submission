class Solution {
public:
    int countRotations(string s, int k) {
        int ans =0 ; 
        int n = s.size();
        for(int i=0 ; i<n ;i++){
            int cnt=0 ; 
            for(int j=0 ; j<n-1 ; j++){
                char a = s[(i+j)% n ];
                char b = s[(i+j+1)%n];

                if(a==b) cnt++;
            }
            if(cnt==k)ans++;
        }
        return ans ; 
    }
};