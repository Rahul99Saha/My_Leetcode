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
    bool identical(TreeNode* p, TreeNode* q){
        if(p==NULL && q==NULL) return true;
        if(p == NULL && q!=NULL || p != NULL && q==NULL) return false;
        if(p->val != q->val) return false;
        return identical(p->left,q->left) && identical(p->right,q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL) return false;
        TreeNode *p = root;
        TreeNode *q = subRoot;
        if(identical(p,q)) return true;
        return isSubtree(p->left,subRoot) || isSubtree(p->right,subRoot);
    }
};