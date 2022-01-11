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
    void dfsCall (TreeNode* root, int &ans, int num) {
        if (root->left == NULL and root->right == NULL) {
            num = 2*num + root->val;
            ans += num;
            return;
        }
        num = 2*num + root->val;
        if (root->left) dfsCall(root->left, ans, num);
        if (root->right) dfsCall(root->right, ans, num);
    }
    int sumRootToLeaf(TreeNode* root) {
        int ans = 0, num = 0;
        dfsCall (root, ans, num);
        return ans;
    }
};