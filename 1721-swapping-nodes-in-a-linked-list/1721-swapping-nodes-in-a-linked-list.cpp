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
    ListNode* rec (ListNode* fast, ListNode* &slow) {
        if (fast == NULL) return slow;
        return rec(fast->next, slow->next);
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* slow = head;
        ListNode* ans = new ListNode();
        ans = slow;
        while (--k) {
            head = head->next;
        }
        swap((rec(head->next, slow))->val, head->val);
        return slow;
    }
};