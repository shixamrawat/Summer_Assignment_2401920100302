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
    int maxSum;
    int helper(TreeNode* root) {
        if(root==nullptr) return 0;
        int l= helper(root->left);
        int r= helper(root->right);

        int bend=l+r+root->val; //bend mean root node and left and right
        int oneside=max(l,r)+root->val;
        int onlyroot=root->val;

        maxSum=max({maxSum,bend,oneside,onlyroot});
        return max(oneside,onlyroot);
    }
    
    int maxPathSum(TreeNode* root) {
        maxSum=INT_MIN;
        helper(root);
        return maxSum;
    }
};