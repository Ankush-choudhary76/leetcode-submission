class Solution {
public:
    bool checkOnesSegment(string s) {
      
        int n=s.size();
        int a=0;
        while(s[a]=='1') a++;
        if (a==n) return true ;
        int b=n-1;
        while(s[b]=='0') b--;
        return a>b;
    }
};