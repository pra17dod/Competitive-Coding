// https://leetcode.com/problems/diameter-of-binary-tree/

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
    int maxHeight(TreeNode* root, int &ans){
        if (root == NULL) 
            return 0;
        int lh = maxHeight(root->left, ans);
        int rh = maxHeight(root->right, ans);
        ans = max(ans, lh + rh);
        return 1 + max(lh,rh);
    }
    

public:
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        int tmp = maxHeight(root, ans);
        return ans;
    }
};