class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        dict = {}
        dict[0] = 1
        sum = 0
        cnt = 0
        for it in nums:
            sum = sum + it
            prev = sum - k
            cnt = cnt + dict.get(prev , 0 )
            dict[sum] = dict.get(sum , 0 )+1
        return cnt 