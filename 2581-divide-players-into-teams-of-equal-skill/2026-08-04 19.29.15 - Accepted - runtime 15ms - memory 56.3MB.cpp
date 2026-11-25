class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin() , skill.end());
        int i=0 , j = skill.size()-1;
        long long  sum=-1;
        long long mul =0 ; 
        while(i<j){
            long long  val = (skill[i]+skill[j]);
              if(sum!=-1 && sum!=val)return -1 ; 
              sum = val;
              mul +=(skill[i]*skill[j]);
              i++ ; j--;
        }
        return mul ; 
    }
};