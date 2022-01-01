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
        vector <int> postorder;
        stack <TreeNode*> st;
        TreeNode* curr = root;
        TreeNode* tmp = NULL;

        while (curr != NULL or !st.empty()) {
            if (curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }
            else {
                tmp = st.top()->right;
                if (tmp != NULL) {
                    curr = tmp;
                }
                else {
                    tmp = st.top();
                    st.pop();
                    postorder.push_back(tmp->val);

                    while (!st.empty() and tmp == st.top()->right) {
                        tmp = st.top();
                        st.pop();
                        postorder.push_back(tmp->val);
                    }
                }
            }
        }
        return postorder;
    }
};