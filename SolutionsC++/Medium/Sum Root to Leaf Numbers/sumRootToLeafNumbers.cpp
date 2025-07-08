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
    void getRootToLeafNumber(TreeNode* root, int potentialResult, vector<int>& result){
    if(root == nullptr) return;
    potentialResult = potentialResult*10 + root->val;
    if(root->left == nullptr && root->right == nullptr){
        result.push_back(potentialResult);
        return;
    }
    getRootToLeafNumber(root->left, potentialResult, result);
    getRootToLeafNumber(root->right, potentialResult, result);
    }


    int sumNumbers(TreeNode* root) {
        vector<int> nodeLeafNumbers;
        int solution = 0;

        getRootToLeafNumber(root,0,nodeLeafNumbers);

        for (int num: nodeLeafNumbers) {
            solution+=num;
        }
        return solution;

    }
};
