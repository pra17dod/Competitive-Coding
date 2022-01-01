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
    vector<vector<int>> allTraversal(TreeNode* root) {
        vector <int> preorder, inorder, postorder;
        stack <pair <TreeNode*, int> st;
        if (root == NULL) return;
        st.push({root, 1});
        TreeNode* curr = root;
        while (!st.empty()) {
            TreeNode* node = st.top().first;
            int num = st.top().second;
            st.pop();

            if (num == 1) {
                preorder.push_back(node->val);
                st.push({node, num+1});
                if(node->left){
                    st.push({node->left, 1});
                }
            }
            if (num == 2) {
                preorder.push_back(node->val);
                st.push({node, num+1});
                if(node->right){
                    st.push({node->right, 1});
                }

            }
            if (num == 3) {
                postorder.push_back({node->val});
            }
        }

        return vector <vector<int>> {preorder, inorder, postorder};
    }
};