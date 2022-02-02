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
    void rec (vector<int>& n, TreeNode* &root, vector<int>::iterator st, 
              vector<int>::iterator ed) {
        if (st < ed) {
            auto it = std::max_element(st, ed);
            root = new TreeNode(*it);
            rec (n, root->left, st, it);
            rec (n, root->right, it + 1, ed);
        }
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& n) {
        TreeNode* root = new TreeNode;
        rec (n, root, n.begin(), n.end());
        return root;
    }
};