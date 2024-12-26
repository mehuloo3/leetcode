class Solution(object):
    def pivotArray(self, nums, pivot):
        """
        :type nums: List[int]
        :type pivot: int
        :rtype: List[int]
        """
        x=[]
        y=[]
        z=[]
        for i in nums:
            if i<pivot:
                x.append(i)
            elif i==pivot:
                y.append(i)
            else:
                z.append(i)
        return x+y+z
        