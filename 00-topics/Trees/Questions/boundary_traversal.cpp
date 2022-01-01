// https://www.lintcode.com/problem/878/

/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */

class Solution {

public:
    void leftBoundary(TreeNode* root, vector <int> &v) {
        if (root == NULL) return;
        TreeNode* curr = root;
        TreeNode* prev = NULL;
        while (true) {
            if (curr != NULL) {
                v.push_back(curr->val);
                prev = curr;
                curr = curr->left;
            }
            else {
                curr = prev->right;
                if (curr == NULL) {
                    v.pop_back();
                    break;
                }
            }
        }
    }

public:
    void getLeaves(TreeNode* root, vector <int> &v) {
        if (root == NULL) return;
        if (root->left == NULL and root->right == NULL) {
            v.push_back(root->val);
            return;
        }      
        getLeaves(root->left, v);
        getLeaves(root->right, v);
    }

public:
    void rightBoundary (TreeNode* root, vector <int> &v) {
        if (root == NULL) return;
        stack <int> st;
        TreeNode * curr = root;
        TreeNode * prev = NULL;
        while (true) {
            if (curr != NULL) {
                st.push(curr->val);
                prev = curr;
                curr = curr->right;
            }
            else {
                curr = prev->left;
                if (curr == NULL) {
                    v.pop_back();
                    break;
                }
            }
        }
        while (!st.empty()) {
            v.push_back(st.top());
            st.pop();
        }
    }

public:
    /**
     * param root: a TreeNode
     * return: a list of integer
     */
    vector<int> boundaryOfBinaryTree(TreeNode * root) {
        // write your code here
        vector <int> ans;
        if (root == NULL) return ans;
        if (root->left or root->right)
            ans.push_back(root->val);
        leftBoundary (root->left, ans);
        getLeaves (root, ans);
        rightBoundary (root->right, ans);
        return ans;
    }
};