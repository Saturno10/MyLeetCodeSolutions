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
    void deepFirstSearch(TreeNode* node, deque<char>& currentString, string& solution){
        if(node == nullptr) return;
        char currentLetter = 'a' + node->val;
        currentString.push_front(currentLetter);
        if(node->left == nullptr && node->right == nullptr){
            string posibleSolution = string(currentString.begin(),currentString.end());
            if(solution.empty() || posibleSolution < solution){
                solution = posibleSolution;
            }
        }
        deepFirstSearch(node->left,currentString,solution);
        deepFirstSearch(node->right,currentString,solution);
        
        currentString.pop_front();

    }

    string  smallestFromLeaf(TreeNode* root){
        string solucion = "";
        deque<char> currentString;
        if (root != nullptr) deepFirstSearch(root,currentString,solucion);
        return solucion;
    }
};
