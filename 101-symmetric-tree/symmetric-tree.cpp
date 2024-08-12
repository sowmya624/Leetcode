/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        return root;
        return iss(root->left,root->right);
    }
    bool iss(TreeNode* n,TreeNode* m){
        if(n==NULL||m==NULL)
        return n==m;
        if(n->val!=m->val)
        return false;
        return iss(n->left,m->right)&&iss(n->right,m->left);
    }
};