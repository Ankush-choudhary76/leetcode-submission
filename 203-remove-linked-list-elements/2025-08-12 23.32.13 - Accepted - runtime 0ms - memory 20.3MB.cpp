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
    ListNode* removeElements(ListNode* head, int val) {
       ListNode* dum = new ListNode(0);
    dum->next = head;
    ListNode* temp = dum;

    while (temp->next) {
        if (temp->next->val == val) {
            ListNode* fr = temp->next;
            temp->next = temp->next->next;
            delete fr;
        } else {
            temp = temp->next;
        }
    }
    head = dum->next;
    delete dum;
    return head;
    }
};