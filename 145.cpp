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
    void recursive(TreeNode* root,vector<int>* vec){
        if(root!=NULL){
            recursive(root->left,vec);
            recursive(root->right,vec);
            vec->push_back(root->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vec;
        vector<int>* v=&vec;
        recursive(root,v);
        return vec;
    }
};
