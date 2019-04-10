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
    bool isUnivalTree(TreeNode* root) {
        stack<TreeNode*> nodestk;
        int univalue=root->val;
        nodestk.push(root);
        if(root==NULL)
            return true;
        while(!nodestk.empty()){
           root=nodestk.top();
           nodestk.pop();
           if(root->left!=NULL){
               if(root->left->val!=univalue)
                   return false;
               nodestk.push(root->left);
           }
           if(root->right!=NULL){
               if(root->right->val!=univalue)
                   return false;
               nodestk.push(root->right);
           }
           
        }
        return true;
    }
};
