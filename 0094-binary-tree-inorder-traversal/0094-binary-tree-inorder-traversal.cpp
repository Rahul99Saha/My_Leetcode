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
    vector<int> inorderTraversal(TreeNode* root) {
        // root = [1,2,3,4,5,null,8,null,null,6,7,9]
        // stack = [1 ]
        // ans = [4 2 ]
        vector<int>ans;
        stack<TreeNode*>st;
        TreeNode* node = root;
        if(root == NULL) return ans;
        while(!st.empty() || node!=NULL){
            if(node != NULL){
                st.push(node);
                node = node -> left;
            }
            else {
                node = st.top();
                st.pop();
                ans.push_back(node->val);
                node = node->right;
            }
        }
        return ans;
    }
};