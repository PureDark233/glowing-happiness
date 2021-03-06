/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return root;
        TreeNode* tmp;
        tmp=root->right;
        root->right=root->left;
        root->left=tmp;
        if(root->right!=NULL){
            invertTree(root->right);
        }
        if(root->left!=NULL){
            invertTree(root->left);
        }
        return root;
    }
};
