class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int j =-1 ; 
    for(int i= 0 ; i<arr.size();i++){
        if(arr[i]==val){
            j= i;
            break ; 
        }
    }
    if(j==-1)return arr.size(); 

    for(int i=j+1;i<arr.size();i++){
        if(arr[i]!=val){
            swap(arr[j],arr[i]);
            j++;
        }

    }
    return j ; 
     
    }
};