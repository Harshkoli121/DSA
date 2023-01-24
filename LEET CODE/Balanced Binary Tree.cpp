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
unordered_map<TreeNode*,int>mp;
int getHeight(TreeNode *root)
{
if(!root)

    return 0;

int h=1+max(getHeight(root->left),getHeight(root->right));
return h;
}
    bool isBalanced(TreeNode* root) {
       if(!root)
       {
           return true;
       } 
       int l=getHeight(root->left);
       int l1=getHeight(root->right);
        return abs(l-l1)<2 && isBalanced(root->left) && isBalanced(root->right);

    }
};
