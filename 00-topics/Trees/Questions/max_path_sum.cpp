// https://leetcode.com/problems/binary-tree-maximum-path-sum/

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
    int dfsCall (TreeNode* root, int &ans) {
        if (root == NULL)
            return 0;
        
        int lh = dfsCall(root->left, ans);
        int rh = dfsCall(root->right, ans);
        
        if (lh < 0) lh = 0;
        if (rh < 0) rh = 0;        
        ans = max((rh + lh + root->val), ans); 
        
        return root->val + max(lh, rh);
    }
    
public:
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        int tmp = dfsCall(root, ans);
        return ans;
    }
};