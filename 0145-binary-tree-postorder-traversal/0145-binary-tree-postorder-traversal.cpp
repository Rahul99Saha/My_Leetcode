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
        // root = [1,2,3,4,5,null,8,null,null,6,7,9]
        // stack = [ ]
        // ans = [1 3 8 9 2 5 7 6 4]
        vector<int>ans;
        stack<TreeNode*>st;
        TreeNode* node = root;
        while(!st.empty() || node!=NULL){
            if(node!=NULL){
                if(node -> left)
                    st.push(node->left);
                ans.push_back(node->val);
                node= node->right;
            }
            else{
                node = st.top();
                st.pop();
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};