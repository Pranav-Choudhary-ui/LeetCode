// Last updated: 21/07/2026, 09:08:34
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* list = new ListNode();
        ListNode* head = list;
        int carry = 0;

        while( l1 != NULL && l2 != NULL){
            ListNode* temp = new ListNode();

            int ans = (l1->val) + (l2->val) + carry;
            carry = 0;
            temp->val = ans % 10;
            carry += ans/10;

            list->next = temp;
            list = list->next;

            l1 = l1->next;
            l2 = l2->next;
            
        }

        while( l1 != NULL){
            ListNode* temp = new ListNode();

            int ans = (l1->val) + carry;
            carry = 0;
            temp-> val = ans % 10;
            carry += ans/10;

            list->next = temp;
            l1 = l1->next;
            list = list->next;
        }

        while( l2 != NULL){
            ListNode* temp = new ListNode();

            int ans = (l2->val) + carry;
            carry = 0;
            temp->val = ans % 10;
            carry += ans/10;

            list->next = temp;
            l2 = l2->next;
            list = list->next;
        }

        if(carry != 0){
            ListNode* temp = new ListNode();

            temp->val = carry;
            list->next = temp;
            carry = 0;
        }

        return head->next;
    }
};