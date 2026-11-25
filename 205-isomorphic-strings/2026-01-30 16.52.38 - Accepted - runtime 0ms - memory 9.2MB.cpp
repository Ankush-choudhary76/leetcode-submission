class Solution {
public:
    bool isIsomorphic(string s, string t) {
    int m1[256], m2[256];
    memset(m1, -1, sizeof(m1));
    memset(m2, -1, sizeof(m2));

    for(int i = 0; i < s.size(); i++) {
        if(m1[s[i]] != m2[t[i]]) return false;
        m1[s[i]] = m2[t[i]] = i;
    }
    return true;
}

};