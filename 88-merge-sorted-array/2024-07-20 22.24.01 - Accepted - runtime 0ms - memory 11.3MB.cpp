class Solution {
public:
    void merge(vector<int>& a, int n1, vector<int>& b, int n2) {
        vector<int>unionn;
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            
                unionn.push_back(a[i]);
            i++;
        }else{
             
                unionn.push_back(b[j]);
            j++;
        }
    }
    while(j<n2){
            
                unionn.push_back(b[j]);
            j++;
    }
    while(i<n1){
         
                unionn.push_back(a[i]);
            i++;
    }
          for(int i=0;i<unionn.size();i++){
            a[i]=unionn[i];
          }
        
    }
};