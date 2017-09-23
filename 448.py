class Solution:
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        
        n = len(nums);        
        for i in range(0,n):
            nums[abs(nums[i])-1] = -abs(nums[abs(nums[i])-1]) 
            # print(nums[abs(nums[i])-1])

        return [i+1 for i in range(n) if nums[i]>0  ]