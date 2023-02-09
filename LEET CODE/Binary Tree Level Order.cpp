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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<int>ans;
        queue<int>que;
        
        while(!que.empty())
        {
            TreeNode* temp=que.front();
            if(root->left)
            {
                ans.push_back(root->val,ans);
            }
            if(root->right)
            {
                ans.push_back(root->val,ans);
            }
            que.pop();

        }
        return ans;
    }
};
