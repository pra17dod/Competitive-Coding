// https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/

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
    struct Compare {
    bool operator()(tuple <int, int, int> &a, tuple <int, int, int> &b) {
        if (get<0>(a) == get<0>(b)) {
            if (get<1>(a) == get<1>(b)) {
                return get<2>(a) > get<2>(b);
            }
            else return (get<1>(a) > get<1>(b));
        }
        else return (get<0>(a) > get<0>(b));
    }
};
    
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        priority_queue< tuple <int, int, int> , vector <tuple <int, int, int>>, Compare > pq;
        
        queue < tuple <int, int, TreeNode*> > q;
        q.push({0,0, root});
        
        while (!q.empty()) {
            int dis = get<0>(q.front());
            int level = get<1>(q.front());
            TreeNode* node = get<2>(q.front());
            q.pop();
            
            pq.push({dis, level, node->val});
            
            if (node->left) 
                q.push({dis - 1, level + 1, node->left});
            if (node->right) 
                q.push({dis + 1, level + 1, node->right});
        }
                       
        vector <vector <int> > ans;
        while (!pq.empty()) {
            vector <int> row;
            int dis = get<0>(pq.top());
            row.push_back(get<2>(pq.top()));
            pq.pop();
            while (!pq.empty() and dis == get<0>(pq.top())) {
                row.push_back(get<2>(pq.top()));
                pq.pop();
            }
            ans.push_back(row);
        }
    
        return ans;
    }
};