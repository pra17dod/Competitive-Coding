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
    void rec(ListNode* head, int &cnt, int curr, ListNode* &ans) {
        if (head == NULL) {
            cnt = cnt >> 1;
            cnt++;
            cout << cnt;
            return;
        }
        cnt++; curr++;
        rec(head->next, cnt, curr, ans);
        if (curr == cnt) {
            ans = head;
        }     
        return;
    }
    ListNode* middleNode(ListNode* head) {
        int cnt = 0, curr = 0;        
        ListNode* ans;
        rec(head, cnt, curr, ans);
        return ans;
    }
};