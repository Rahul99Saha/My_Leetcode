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
    int maxPath(TreeNode* root,int& max_sum){
        if(root == NULL) return 0;
        int left = max(maxPath(root->left,max_sum),0);
        int right = max(0,maxPath(root->right,max_sum));
        max_sum = max(max_sum,left+right+root->val);
        return max(left,right)+ root->val;
    }
    int maxPathSum(TreeNode* root) {
        int max_sum = INT_MIN;
        maxPath(root,max_sum);
        return max_sum;
    }
};