#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {

public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> preorder;
        stack <TreeNode*> st;
        TreeNode* curr = root;
        while (true) {
            if (curr != NULL){
                st.push(curr);
                preorder.push_back(curr->val);
                curr = curr->left;
            }
            else {
                if(st.empty()) break;
                curr = st.top();
                st.pop();
                curr = curr->right;
            }
        }
        return preorder;
    }

public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> preorder;
        stack <TreeNode*> st;
        if (root == NULL)
            return preorder;

        while(!st.empty()) {
            TreeNode* node = st.top();
            st.pop();
            preorder.push_back(node->val);

            if(node->right) {
                st.push(node->right);
            }
            if (node->left) {
                st.push(node->left);
            }
        }
        return preorder;
    }
};