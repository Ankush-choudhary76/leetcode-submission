class Solution {
public:
    int secondsBetweenTimes(string st, string et) {
        int h1 = (st[0]-'0')*10 + (st[1]-'0');
         int m1 = (st[3]-'0')*10 + (st[4]-'0');
         int s1 = (st[6]-'0')*10 + (st[7]-'0');

          int h2 = (et[0]-'0')*10 + (et[1]-'0');
         int m2 = (et[3]-'0')*10 + (et[4]-'0');
         int s2 = (et[6]-'0')*10 + (et[7]-'0');

        int s = h1*3600 + m1*60 + s1;
        int e = h2*3600 + m2*60 + s2 ; 
        return e-s ; 
    }
};