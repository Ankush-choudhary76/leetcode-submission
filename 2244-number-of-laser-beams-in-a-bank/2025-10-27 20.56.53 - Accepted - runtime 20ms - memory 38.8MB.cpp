class Solution {
public:
     int find (string str ){
        int cnt = 0 ; 
        for(auto it : str){
            if(it=='1'){
                cnt++;
            }
        }
        return cnt ; 
     }
    int numberOfBeams(vector<string>& bank) {
     int n = bank.size() ; 
      int val = 0 ; 
      for( int i = 0 ; i<n-1; i++) {
        string str = bank[i];
        int avl =0;
        for(auto it : str){
            if(it=='1'){
                avl++;
            }
        }
        if(avl==0) continue ; 
        int cnt = 0 ; 
        for(int j=i+1 ; j<n ; j++){
             cnt +=find(bank[j]);
             if(cnt !=0) break ; 
        }
        
        val += cnt!=0? avl*cnt : 0;
      } 
      return val ;
    }
};