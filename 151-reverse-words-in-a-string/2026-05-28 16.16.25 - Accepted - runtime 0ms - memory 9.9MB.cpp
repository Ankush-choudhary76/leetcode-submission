class Solution {
public:
    string reverseWords(string s) {
         reverse(s.begin(),s.end());
        int i = 0;
        int j = 0;
        int n = s.size();

        while(j < n) {

            while(j<n && s[j] == ' ') {
                j++;
            }

            if(j>=n) {
                break;
            }

            if(i!=0) {
                s[i++] = ' ';
            }

            int start = i;

            while(j<n && s[j] !=' ') {
                s[i++] = s[j++];
            }

            reverse(s.begin()+start, s.begin()+i);
        }

        s.resize(i);

        return s;  
    }
};