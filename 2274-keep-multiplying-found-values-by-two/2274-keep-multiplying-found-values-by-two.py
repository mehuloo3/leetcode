class Solution(object):
    def findFinalValue(self, nums, original):
        """
        :type nums: List[int]
        :type original: int
        :rtype: int
        """
        n=len(nums)
        nums.sort()
        i=0
        while i<n:
            if nums[i]==original:
                original=original*2
            i+=1
        return original

        