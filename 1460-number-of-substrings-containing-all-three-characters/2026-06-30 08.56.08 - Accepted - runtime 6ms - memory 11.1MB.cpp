class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int i = 0;
        int j = 0 , cnt =0 ;
       vector<int>arr(3,0);
        while (i < s.size()) {
            arr[s[i]-'a']++;
            
            while(i-j+1 >=3 && arr[0]>0 && arr[1]>0 && arr[2]>0){
                cnt += n-i ; 
                arr[s[j]-'a']--;
                j++;

            }
            i++; 
        }
        return cnt ; 
    }
};