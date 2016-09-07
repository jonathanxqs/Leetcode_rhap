class Solution(object):
    def reverseString(self, s):
        """
        :type s: str
        :rtype: str
        """
        return s[::-1]

#  #字符串的反转
# def reverse (s):
# 	rt = ''
# 	for i in range(len(s)-1, -1, -1):
# 		rt += s[i]
# 	return rt


# def reverse2 (s):
# 	li = list(s)
# 	li.reverse()
# 	rt = "".join(li)
# 	return rt

# def reverse3 (s):
# 	return s[::-1]

# def reverse4 (s):
# 	return "".join(reversed(s))

# from functools import reduce
# def reverse5 (s):
# 	return reduce(lambda x,y:y+x,s)