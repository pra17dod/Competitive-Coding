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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) return head;
        ListNode* ans = head;
        rec(head, head, ans);
        return ans;
    }
    
    void rec(ListNode* root, ListNode* &head, ListNode* &ans) {
        if (root->next == NULL) {
            head = root;
            ans = root;
            return;
        }
        rec(root->next, head, ans);
        head->next = root;
        head = head->next;   
        head->next = NULL;
    }
};