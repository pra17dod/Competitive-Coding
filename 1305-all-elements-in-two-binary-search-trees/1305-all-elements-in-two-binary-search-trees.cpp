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
    void rec (TreeNode* root, vector <int>& v) {
        if(root == NULL) return;
        rec (root->left, v);
        v.push_back(root->val);
        rec (root->right, v);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector <int> v1, v2;
        rec (root1, v1);
        rec (root2, v2);
        vector <int> v3 (v1.size() + v2.size());
        merge (v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
        return v3;
    }
};