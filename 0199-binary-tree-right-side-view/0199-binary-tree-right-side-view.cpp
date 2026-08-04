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
    //parent,right,left
    void reverse_preorder(TreeNode* node,int level,vector<int>& ans){
        if(node == NULL) return;
        if(ans.size()==level) ans.push_back(node->val); 
        reverse_preorder(node->right,level+1,ans);
        reverse_preorder(node->left,level+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        reverse_preorder(root,0,ans);
        return ans;
        
    }
};