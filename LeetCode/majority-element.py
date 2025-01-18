class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        majority = res = 0
        for num in nums:
            if majority == 0:
                res = num
            majority += 1 if num == res else -1
        return res
        
