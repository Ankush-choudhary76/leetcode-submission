class Solution {
public:
    void sorrt(vector<int>& nums, int low , int mid, int n) {
        vector<int> temp;
        int left = low ; 
        int right = mid + 1;
        while (left <=mid && right <= n) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }
        while (left <=mid) {
            temp.push_back(nums[left]);
            left++;
        }
        while (right <=n) {
            temp.push_back(nums[right]);
            right++;
        }
        for (int i = low; i <=n; i++) {
            nums[i] = temp[i - low ];
        }
    }
    void marge(vector<int>& nums, int i, int j) {
        if (i >= j)
            return;
        int mid = (i + j )/ 2;
        marge(nums, i, mid);
        marge(nums, mid + 1, j);
        sorrt(nums, i, mid, j);
    }
    vector<int> sortArray(vector<int>& nums) {
        marge(nums, 0, nums.size()-1);
        return nums;
    }
};