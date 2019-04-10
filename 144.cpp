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
    void recursion(TreeNode* root, vector<int>* vec){
        if(root->left!=NULL){
            vec->push_back(root->left->val);
            recursion(root->left,vec);
        }
        if(root->right!=NULL){
            vec->push_back(root->right->val);
            recursion(root->right,vec);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec;
        vector<int>* prevec=&vec;
        if(root==NULL)
            return vec;
        vec.push_back(root->val);
        recursion(root,prevec);
        return vec;
    }
};
