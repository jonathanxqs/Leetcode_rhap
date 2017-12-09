class Solution:
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        n = len(nums) + 1;
        nums.append(n);
        map(lambda x:x+1,nums)


        for i in range(n):
            nums[abs(i)-1] *= -1;


        for i,j in enumerate(nums):
            if j>0:
                return i+1-1;

