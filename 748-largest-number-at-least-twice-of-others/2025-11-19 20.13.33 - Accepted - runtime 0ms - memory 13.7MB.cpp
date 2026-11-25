class Solution {
public:
    int dominantIndex(vector<int>& nums) {
            int index = -1 , m_ele=INT_MIN ; 
            for(int i=0 ; i<nums.size() ; i++){
                if(m_ele<nums[i]){
                    m_ele= nums[i];
                    index = i; 
                }
            }  
            for(auto it : nums){
                if(m_ele < it*2  && it!= m_ele){
                    return -1  ; 
                }
            }
            return index ; 
              
    }
};