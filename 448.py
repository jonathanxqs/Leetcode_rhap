class Solution:
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        
        n = len(nums);
        index = 0;
        for i in range(0,n):
            nums[nums[i]] = - abs(nums[nums[i]]);