class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>freq(26,0);

        for(auto it :s){
            freq[it-'a']++;
        }
        int n = s.size();
        string str(n,' ');

        int l =0 , r=n-1;

        for(int i =0 ;i<26 ; i++){
            while(freq[i]>=2){
                str[l++]= i+'a';
                str[r--]=i+'a';
                freq[i]-=2;;
            }
            if(freq[i]==1){
                str[n/2]=i+'a';
            }
        }
        return str  ; 
    }
};