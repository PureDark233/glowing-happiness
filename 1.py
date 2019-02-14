class Solution:
	def twoSum(self,nums,target):
		for i,vali in enumerate(nums):
			for j,valj in enumerate(nums[i+1:],i+1):
				if vali+valj==target:
					return [i,j]
