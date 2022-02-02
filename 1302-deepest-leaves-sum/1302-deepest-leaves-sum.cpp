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
    int dfs(TreeNode* root, int ch, int &d) {
        if (root == NULL) return 0;
        if (root->left == NULL and root->right == NULL) {
            if (ch > d) {
                d = ch;
            }
            if (ch == d) {
                cout << root->val << " ";
                return root->val;
            }
            else return 0;
        }
        int l = dfs(root->left, ch + 1, d);
        int d1 = d;
        int r = dfs(root->right, ch +1, d);
        int d2 = d;
        if (d2 > d1) return r;
        else if (d1 > d2) return l;
        else return l + r;        
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int d = 0;
        return dfs (root, 0, d);
    }
};