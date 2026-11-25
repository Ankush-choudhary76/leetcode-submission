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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = dummy;
        ListNode* temp = head;

        while (temp != NULL && curr != NULL) {
            int prev = temp->val;
            if (temp->next != NULL && temp->val == temp->next->val) {
                while (temp != NULL && temp->val == prev) {
                    temp = temp->next;
                }
                curr->next = temp;
            } else {
                temp = temp->next;
                curr = curr->next;
            }
        }
        return dummy->next;
    }
};