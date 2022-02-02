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
class BSTIterator {
public:
    vector <int> inorder;
    int id = 0;
    
    
    BSTIterator(TreeNode* root) {
        inorder.push_back(INT_MIN);
        getInorder(root);
    }
    
    void getInorder (TreeNode* root) {
        if (root == NULL) return;
        getInorder (root->left);
        inorder.push_back(root->val);
        getInorder (root->right);
        return;
    }
    
    int next() {
        id++;
        return inorder[id];
    }
    
    bool hasNext() {
        if (id+1 != inorder.size()) return true;
        else return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */