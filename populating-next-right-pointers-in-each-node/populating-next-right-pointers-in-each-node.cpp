/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        Node* ans = root;
        if (root == NULL) return ans;
        queue <Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            int size = q.size();
            
            for (int i = 1; i <= size; i++) {
                Node* node = q.front();
                q.pop();
                if (i == size) {
                    node->next = NULL;
                }
                else node->next = q.front();
                
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        return ans;
    }
};