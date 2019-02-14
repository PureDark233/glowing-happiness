class Solution:
	def judgeCircle(self, moves):
		"""
		:type moves: str
		:rtype: bool
		"""
		x=0
		y=0
		for i in moves:
			if i=='R':
				x+=1
			elif i=='L':
				x-=1
			elif i=='U':
				y+=1
			elif i=='D':
				y-=1
		if x==0 and y==0:
			return True
		else:
			return False