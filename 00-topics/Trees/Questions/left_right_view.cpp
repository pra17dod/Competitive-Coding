// https://leetcode.com/problems/binary-tree-right-side-view/

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
    vector<int> rightSideView(TreeNode* root) {
        vector <int> ans;
        if (root == NULL) return ans;
        map <int, int> mp;
        queue <pair<int, TreeNode*>> q;
        q.push({1, root});
        
        while (!q.empty()) {
            int dis = q.front().first;
            TreeNode* node = q.front().second;
            q.pop();
            
            if (mp[dis] == 0) mp[dis] = node->val;
            // for right view
            if (node->right) q.push({dis + 1, node->right});
            if (node->left) q.push({dis + 1, node->left});

            // for left view
            // take left subtree first then right subtree
        }   
        
        for (auto it : mp) 
            ans.push_back(it.second);
        
        return ans;
    }
};