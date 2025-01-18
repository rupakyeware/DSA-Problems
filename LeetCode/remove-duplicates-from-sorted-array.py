# This solution essentially replaces the duplicate element with a unique element. This preserves the ascending order as well as the size of the List and finally, it returns the size of the subset of the List which contains the unique elements

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if not nums:
            return 0
        j = 0
        for i in range(len(nums)):
            if(nums[i] != nums[j]):
                j += 1
                nums[j] = nums[i]
        return j+1

        

            
        
