/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue <pair <int, ListNode*>, vector <pair <int, ListNode*>>, greater <pair <int, ListNode*>> > pq;
        for (auto &l : lists) {
            if (l) pq.push({l->val, l});
        }
        
        ListNode* head = new ListNode(0);
        ListNode* itr = head;
        while (!pq.empty()) {
            int v = pq.top().first;
            ListNode* n = pq.top().second;
            pq.pop();
            itr->next = n;
            itr = itr->next;
            if (n->next) pq.push({n->next->val, n->next});
        }
        
        return head->next;
        
    }
};