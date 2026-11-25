class Solution {
public:
     int fun(string s , vector<int>& weights){
        int val =0 ; 
        for(auto it : s){
            int a = it-'a';
            val+= weights[a];
        }
        return val ; 
     }
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string str ="";
        for(auto it : words){
            int sum = fun(it , weights);
            sum = sum%26 ;
            sum = 25-sum ; 
            str += 'a'+sum;
        }
        return str ; 
    }
};