https://leetcode.com/problems/sum-of-left-leaves/

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
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        if (root == NULL) return ans;
        map <int, int> mp;
        queue <tuple <int, int, TreeNode*>> q;
        q.push({1, 0, root});
        
        while (!q.empty()) {
            int dis = get<0>(q.front());
            int isLeft = get<1>(q.front());
            TreeNode* node = get<2>(q.front());
            q.pop();
            
            if (isLeft == 1 and node->left == NULL and node->right == NULL) 
                ans += node->val;

            if (node->left) q.push({dis + 1, 1, node->left});
            if (node->right) q.push({dis + 1, 0, node->right});
            
        }
        
        return ans;
    }
};