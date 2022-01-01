// https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

//Function to return a list containing the bottom view of the given tree.

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector <int> ans;
        if (root == NULL) return ans;
       	map <int, int> mp;
        queue <pair <int, Node*> > q;
        q.push({0, root});

        while (!q.empty()) {
            int dis = q.front().first;
            Node* node = q.front().second;
            q.pop();

            mp[dis] = node->data;

            if (node->left) q.push({dis - 1, node->left});
            if (node->right) q.push({dis + 1, node->right});
        }
        for (auto it : mp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
