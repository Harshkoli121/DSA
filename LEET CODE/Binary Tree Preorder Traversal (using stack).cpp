class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>S;
        vector<int>V;

        if(root)
        {
            S.push(root);
        }

        while(!S.empty())
        {
            TreeNode *temp = S.top();
            V.push_back(temp->val);
            S.pop();
            if(temp->right)
            {
                S.push(temp->right);
            }

            if(temp->left)
            {
                S.push(temp->left);
            }
        }
        return V;
    }
};
