class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count1 =0,count2=0;
        int ele1 = -1,ele2 = -2;
        for(int i=0;i<n;i++){
            if(count1==0 && nums[i]!=ele2){
                ele1 = nums[i];
                count1++;
            }else if(count2==0 && nums[i]!=ele1){
                 ele2 = nums[i];count2++;
            }else if(nums[i]==ele1)count1++;
            else if(nums[i]==ele2)count2++;
            else{
                count1--;
                count2--;
            }
        }    
            vector<int>list;
            int valco1 =0,valco2=0;
            for(int i=0;i<n;i++){
                if(ele1==nums[i]) valco1++;
                if(ele2==nums[i]) valco2++;
            }
            int mini = n/3+1;
            if(valco1>=mini) list.push_back(ele1);
            if(valco2>=mini) list.push_back(ele2);
            sort(list.begin(),list.end());
            return list ;
        
    }
};