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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<tuple<TreeNode*, int, int>> q;// node row col
        map<int,vector<pair<int,int>>>nodes;//for each col - store {rows,value}, sort by row if row same sort by value;
        q.push({root,0,0});
        while(!q.empty()){
            auto [node, row, col] = q.front();
            q.pop();
            nodes[col].push_back({row, node->val});
            if(node->left){
                q.push({node->left,row+1,col-1});
            }
            if(node->right){
                q.push({node->right,row+1,col+1});
            }
        }
        vector<vector<int>>ans;
        for(auto &it:nodes){
            auto &vec = it.second;
            sort(vec.begin(),vec.end());
            vector<int>col;
            for(auto & p:vec){
                col.push_back(p.second);
            }
            ans.push_back(col);
        }
        return ans;
    }
};