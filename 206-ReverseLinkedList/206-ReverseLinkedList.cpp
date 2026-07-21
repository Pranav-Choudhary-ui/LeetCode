// Last updated: 21/07/2026, 09:07:06
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
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* curr = head->next;
        ListNode* nxt = curr->next;

        head->next = NULL;

        while(curr!=NULL){
            curr->next = head;
            head = curr;
            curr = nxt;
            if(nxt!=NULL){
                nxt = nxt->next;
            }
        }
        return head;
    }
};