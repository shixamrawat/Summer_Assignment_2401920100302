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
        pair<int,int> diameter(TreeNode* root){
            if(root==nullptr){
                return make_pair(0,0);
            }
            //pair have-> (diameter,height)
            pair<int,int> leftinfo=diameter(root->left);
            pair<int,int> rightinfo=diameter(root->right);
            int currdiam=leftinfo.second +rightinfo.second+1;
            int finaldiam=max(currdiam,max(leftinfo.first,rightinfo.first));
            int finalht=max(leftinfo.second,rightinfo.second)+1;
            return make_pair(finaldiam,finalht);
        }
        int diameterOfBinaryTree(TreeNode* root) {
            pair<int,int> container;
            pair<int,int> result=diameter(root);
            //edge=node-1
            return result.first-1;
        }
    };