class Solution:
	def hammingDistance(self, x, y):
		"""
		:type x: int
		:type y: int
		:rtype: int
		"""
		count=0
		strx = str(bin(x))[2:]
		stry = str(bin(y))[2:]
		lenx = len(strx)
		leny = len(stry)
		if (lenx < leny):
			strx = "0" * (leny - lenx) + strx
			lenx = leny
		else:
			stry = "0" * (lenx - leny) + stry
			leny = lenx
		for i in range(lenx):
			if strx[i] != stry[i]:
				count+=1
		return count
