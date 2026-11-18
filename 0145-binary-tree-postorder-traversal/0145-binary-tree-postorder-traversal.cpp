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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        TreeNode* lastVisited = NULL;
        vector<int>ans;
        TreeNode* curr = root;
        while(curr!=NULL || !st.empty()){
            while(curr!=NULL){
                st.push(curr);
                curr = curr->left;
            }
            TreeNode* node = st.top();
            if(node->right == NULL || lastVisited == node->right) {
                ans.push_back(node->val);
                lastVisited = node;
                st.pop();
            }
            else{
                curr = node -> right;
            }
        }
        return ans;
    }
};