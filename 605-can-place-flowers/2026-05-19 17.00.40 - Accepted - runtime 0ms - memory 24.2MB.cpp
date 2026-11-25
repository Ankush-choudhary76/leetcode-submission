class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        for(int i=0 ; i<arr.size() && n!=0 ; i++){
            bool left = i==0 || arr[i-1]==0;
            bool right = i==arr.size()-1 || arr[i+1]==0;

            if(left && right && arr[i]==0){
                arr[i]=1;
                n--;
            }
        }
        return n==0 ; 
    }
};