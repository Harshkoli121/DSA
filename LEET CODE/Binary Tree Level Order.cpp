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
        vector<vector<int>>ans;
        queue<TreeNode*>que;
        if(root)
        {
            que.push(root);
        }
        while(!que.empty())
        {
            int size=que.size();
            vector<int>V;
            while(size--){
            TreeNode* temp=que.front();
            if(temp->left)
            {
                que.push(temp->left);
            }
            if(temp->right)
            {
                que.push(temp->right);
               
            }
            V.push_back(temp->val);
            que.pop();

        }
        ans.push_back(V);
        }
        return ans;
    }
};
