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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        if(root == p || root == q) return root;
        TreeNode* lc = lowestCommonAncestor(root->left,p,q);
        TreeNode* rc = lowestCommonAncestor(root->right,p,q);
        if(lc && rc)
            return root;
        else if(lc!=NULL)
            return lc;
        else if(rc != NULL)
            return rc;
        return NULL;
    }
};