bool comp(string a,string b){
    return a+b > b+a;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
	
        vector<string> arr;
		
        for(int it : nums)  arr.push_back(to_string(it));
        
        sort(arr.begin(),arr.end(),comp);
        
        string result;
        
        for(int i=0;i<arr.size();i++)  result+=arr[i];
        
        return result[0]=='0'? "0" : result;
    }

};