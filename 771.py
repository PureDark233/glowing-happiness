class Solution:
	def numJewelsInStones(self, J, S):
		"""
		:type J: str
		:type S: str
		:rtype: int
		"""
		i=0

		for j in J:
			for s in S:
				if s==j:
					i+=1

		return i
