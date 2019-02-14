# Definition for a binary tree node.
class TreeNode(object):
	def __init__(self, x):
		self.val = x
		self.left = None
		self.right = None


class Solution(object):
	def constructMaximumBinaryTree(self, nums):
		"""
		:type nums: List[int]
		:rtype: TreeNode
		"""
		Node = TreeNode(max(nums))
		if nums[0]==max(nums):
			Node.left=None
		else:
			Node.left = self.constructMaximumBinaryTree(nums[:nums.index(max(nums))])

		if nums[-1]==max(nums):
			Node.right=None
		else:
			Node.right = self.constructMaximumBinaryTree(nums[nums.index(max(nums))+1:])
		return Node
