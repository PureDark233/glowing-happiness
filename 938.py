# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    ListR=[]
    def rangeSumBST(self, root, L, R):
        ListR = []
        if root.left != None:
            self.rangeSumBST(root.left, L, R)
            ListR.append(root.left.val)

        ListR.append(root.val)

        if root.right!=None:
            self.rangeSumBST(root.right,L,R)
            ListR.append(root.right.val)




        """
        :type root: TreeNode
        :type L: int
        :type R: int
        :rtype: int
        """
