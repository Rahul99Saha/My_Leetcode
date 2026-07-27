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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        TreeNode* node = root;
        vector<vector<int>>ans;
        int temp = 0;
        if(root == NULL) return ans;
        queue<TreeNode*>q;
        q.push(node);
        while(!q.empty()){
            vector<int>level;
            int s = q.size();
            for(int i = 0;i<s;i++){
                TreeNode* n = q.front();
                q.pop();
                level.push_back(n->val);
                if(n->left!=NULL){
                    q.push(n->left);
                }
                if(n->right!=NULL){
                    q.push(n->right);
                }
            }
            if(temp % 2 != 0)
            {
                reverse(level.begin(),level.end());
            }
            ans.push_back(level);
            temp++;
        }
        return ans;
    }
};