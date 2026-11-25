class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
          sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        for(int i=0;i<arr.size();i++){
            if(i>0 && arr[i]==arr[i-1]) continue;
            for(int j=i+1;j<arr.size();j++){
                if(j>i+1 && arr[j]==arr[j-1]) continue;
                int a=j+1;
                int b=arr.size()-1;
                while(a<b){
                    long long sum=arr[i];
                    sum=sum+arr[j];
                    sum=sum+arr[a];
                    sum=sum+arr[b];
                    if(sum<target){
                        a++;
                    }
                    else if(sum>target){
                        b--;
                    }
                    else{
                        vector<int> temp={arr[i],arr[j],arr[a],arr[b]};
                        ans.push_back(temp);
                        a++;
                        b--;
                        while(a<b && arr[a]==arr[a-1]) a++;
                        while(a<b && arr[b]==arr[b+1])b--;
                    }
                }
            }
        }
        return ans;

    }
};