// https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1#

/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector <int> ans;
        if (root == NULL) return ans;
       	map <int, int> mp;
        queue <pair <int, Node*> > q;
        q.push({0, root});

        while (!q.empty()) {
            int dis = q.front().first;
            Node* node = q.front().second;
            q.pop();

            if (mp[dis] == 0) mp[dis] = node->data;

            if (node->left) q.push({dis - 1, node->left});
            if (node->right) q.push({dis + 1, node->right});
        }
        for (auto it : mp) {
            ans.push_back(it.second);
        }
        return ans;
    }

};
