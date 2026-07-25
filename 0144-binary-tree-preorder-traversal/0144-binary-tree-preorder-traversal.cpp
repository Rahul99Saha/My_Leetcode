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
    vector<int> preorderTraversal(TreeNode* root) {
        // root =  [1,2,3,4,5,null,8,null,null,6,7,9]   
        // stack []
        // ans [1 2 4 5 6 7 3 8 9]
        stack<TreeNode*>st;
        vector<int>ans;
        TreeNode* node = root;
        if(root == NULL) return ans;
        while(!st.empty() || node!=NULL){
            if(node != NULL){
                ans.push_back(node->val);
                if(node->right){
                    st.push(node->right);
                }
                node = node->left;
            }
            else{
                node = st.top();
                st.pop();
            }
        }
        return ans;
    }
};