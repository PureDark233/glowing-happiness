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
    void recursive(TreeNode* root, vector<int>* vec){
        if(root!=NULL){
            recursive(root->left,vec);
            vec->push_back(root->val);
            recursive(root->right,vec);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vec;
        vector<int>* vecpoint=&vec;
        recursive(root,vecpoint);
        return vec;
    }
};
