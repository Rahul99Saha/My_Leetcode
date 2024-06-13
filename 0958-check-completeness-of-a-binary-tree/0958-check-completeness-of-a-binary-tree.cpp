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
    int CountNode(TreeNode* root)
    {
        if(root == NULL)
        return 0;
        return(1+CountNode(root->left)+CountNode(root->right));
    }
    bool solve(TreeNode* root,int i,int N)
    {
        if(root == NULL)
        return true;
        if(i>=N)
        return false;
        bool left = solve(root->left,2*i+1,N);
        bool right = solve(root->right,2*i+2,N);
        return(left && right);
    }
    bool isCompleteTree(TreeNode* root) 
    {
        int n=CountNode(root);
        return solve(root,0,n);
    }
};