/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool dfs(TreeNode* node,vector<TreeNode*>& path,TreeNode* t){
        if(node == NULL) return false;
        path.push_back(node);
        if(node == t) return true;
        if (dfs(node->left, path, t) || dfs(node->right, path, t)){
            return true;
        }
        path.pop_back();
        return false;

    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode* >path_p;
        vector<TreeNode* >path_q;
        dfs(root,path_p,p);
        dfs(root,path_q,q);
        TreeNode* ans = NULL;
        int n = min(path_p.size(), path_q.size());
        for(int i = 0;i<n;i++){
            if(path_p[i]==path_q[i])
                ans = path_p[i];
            else 
                break;
        }
        return ans;
    }
};