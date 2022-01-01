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
    int minDepth(TreeNode* root) {
        queue <pair<TreeNode*, int>> q;
        if (root == NULL)
            return 0;
        q.push({root, 1});
        int ans = 0;
        while (!q.empty()) {
            TreeNode* n = q.front().first;
            int d = q.front().second;
            q.pop();
            ans = d;

            if (n->left == NULL and n->right == NULL)
                return ans;

            if (n->left)
                q.push({n->left, d+1});
            if (n->right)
                q.push({n->right, d+1});
        }
        return ans;
    }
};