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
    void recMerge(ListNode* &head, ListNode* list1, ListNode* list2) {
        if (list1 == NULL or list2 == NULL) {
            if (list1) head = list1;
            else head = list2;
        }
        else if (list1->val < list2->val) {
            head = list1;
            recMerge(head->next, list1->next, list2);
        }
        else {
            head = list2;
            recMerge(head->next, list1, list2->next);
        }
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//          Recursive solution
        ListNode* head = new ListNode();
        recMerge(head, list1, list2);
        return head;
    
//         Normal solution
//         vector <ListNode*> vec; 
//         if (list1 == NULL or list2 == NULL) {
//             if (list1) return list1;
//             else  return list2;
//         }
//         else if (list1->val < list2->val) {
//                 vec.push_back(list1); 
//                 list1 = list1->next;
//         }
//         else {
//                 vec.push_back(list2); 
//                 list2 = list2->next;
//         }
//         while (list1 != NULL and list2 != NULL) {
//             if (list1->val < list2->val) {
//                 vec.back()->next = list1; 
//                 vec.push_back(list1); 
//                 list1 = list1->next;
//             }
//             else {
//                 vec.back()->next = list2; 
//                 vec.push_back(list2); 
//                 list2 = list2->next;
//             }
//         }
//         if (list1) vec.back()->next = list1;
//         else if (list2) vec.back()->next = list2;
        
//         return vec.front();
    }
};