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
    int sumOfLeftLeaves(TreeNode* root){
        //Null tree or node without leafs
        if(root == nullptr || (root->left == nullptr && root->right == nullptr)) return 0;
        int leaf = 0;
        if(root->left != nullptr){
            if(root->left->left == nullptr && root->left->right == nullptr){
                leaf = root->left->val;
            }
        }
        return leaf + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);

    }
};
