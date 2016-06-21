class Solution(object):
    def countBits(self, num):
        """
        :type num: int
        :rtype: List[int]
        """
        rList=[0 for i in range(num+1)]
        
        
        for i in range(1,num+1):
            rList[i]=rList[i>>1] + (i&1)
            
        return rList


     #beat 98%