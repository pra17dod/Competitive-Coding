/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        if (head == NULL) return NULL;        
        if (slow->next == NULL) return NULL;
        if (fast->next->next == NULL) return NULL;

        slow = slow->next;
        fast = fast->next->next;
        while (fast != NULL and fast->next != NULL) {
            if (fast == slow) {
                slow = head;
                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return NULL;
        
    }
};