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
    int maxLevelSum(TreeNode* root) 
    {
        int maxSum=INT_MIN;
        int sum = 0;
        int level=0;
        int maxlevel=0;
        TreeNode *temp =NULL;
        queue <TreeNode *>q;
        q.push(root);
        while(!q.empty())//NULL when it there will be node ..queue--empty
        {
            level++;
            sum=0;
            int size=q.size();
            for(int i =0;i < size; i++)
             { 
                temp=q.front();
                q.pop();
                sum+=temp->val;
                if(temp->left!=NULL)
                 q.push(temp->left);
                if(temp->right!=NULL)
                 q.push(temp->right);
             }
         if(sum>maxSum)
          {
             maxSum=sum;
             maxlevel=level;
          }
        }
        return maxlevel;
    }
};