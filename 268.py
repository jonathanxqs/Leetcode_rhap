class Solution:
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        n = len(nums) + 1
        nums = ( list ( map(lambda x: x+1 , nums) )) ;
        print(nums)        
        nums.append(0);  

        for i in range(n-1):
            nums[abs(i)-1] *= -1;

        print(nums)

        for i,j in enumerate(nums):
            print(i,j)
            if j>0:
                return i+1-1;

