class Solution {
public:
     bool findbq(vector<int>arr , int day ,int m , int k ){
        int n = arr.size();
        int cnt =0 , cntboq=0;
        for(int i=0 ; i<n;i++){
            if(arr[i]<= day) cnt++;
            else {
                cntboq += cnt/k;
                cnt= 0 ;
            }
        }
        cntboq += cnt/k;
        return cntboq >= m ;
     }
    int minDays(vector<int  >& bloomDay, int m, int k) {
     long long  val = m*1ll*k*1ll;
        int n = bloomDay.size();
        if(val > n) return -1 ;
        int mini = INT_MAX , maxi =INT_MIN;
        for(int i=0 ;i<n;i++){
            mini = min(mini , bloomDay[i]);
              maxi = max(maxi , bloomDay[i]);
        }
        int low = mini , high = maxi ;
        while(low<=high){
            int mid = low +(high - low) / 2;

            if(findbq(bloomDay , mid ,m, k ) ) high = mid-1;
            else low = mid+1;
        }
        return low ;
    }
};