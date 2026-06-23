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
        vector<vector<int>>result;
        if(root==nullptr) return result;
        queue<TreeNode*>q;
        q.push(root);
        bool lefttoright=true;

        while(!q.empty()){
            int size=q.size();
            vector<int>current(size);
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                //to store from right to left or left to right
                int idx=lefttoright? i: (size-i-1);
                current[idx]=curr->val;
            }
            result.push_back(current);
            lefttoright=!lefttoright;
        }
        return result;
    }
};