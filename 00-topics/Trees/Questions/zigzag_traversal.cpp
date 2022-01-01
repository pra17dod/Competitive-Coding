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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector <vector <int> > ans;
        queue <TreeNode*> q;
        if (root == NULL)
            return ans;
        q.push(root);
        int leftToRight = 1;
        while (!q.empty()) {
            int size = q.size();
            vector <int> row;
            
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                
                row.push_back(node->val);
            
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            
            if (!leftToRight) {
                reverse(row.begin(), row.end());
                leftToRight = 1;
            }
            else leftToRight = 0;
                
            ans.push_back(row);            
        }
        return ans;
    }
};