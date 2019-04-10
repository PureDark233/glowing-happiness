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
            vec->push_back(root->val);
            recursive(root->left,vec);
            recursive(root->right,vec);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec;
        vector<int>* prevec=&vec;
        recursive(root,prevec);
        return vec;
    }
};
