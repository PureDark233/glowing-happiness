class Solution:
	def selfDividingNumbers(self, left, right):
		"""
		:type left: int
		:type right: int
		:rtype: List[int]
		"""
		rList = []
		for i in range(left, right+1):
			judge = True
			stri = str(i)
			for c in stri:
				if int(c)==0:
					judge=False
					break
				elif i % int(c) != 0:
					judge = False
					break
			if judge == True:
				rList.append(i)
		return rList