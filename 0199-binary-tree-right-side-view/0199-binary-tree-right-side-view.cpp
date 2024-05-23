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
    vector<int> rightSideView(TreeNode* root) {
    vector<int> ans;
    if (root == NULL)
        return ans;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();
        for (int i = 1; i <= n; i++) {
            TreeNode* top = q.front();
            q.pop();
            
            // If it's the last node of the current level, add it to the result
            if (i == n) {
                ans.push_back(top->val);
            }

            if (top->left != NULL) {
                q.push(top->left);
            }
            if (top->right != NULL) {
                q.push(top->right);
            }
        }
    }
    return ans;
}

};