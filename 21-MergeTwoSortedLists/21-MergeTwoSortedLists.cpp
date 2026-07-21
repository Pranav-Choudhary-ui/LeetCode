// Last updated: 21/07/2026, 09:08:21
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* head = new ListNode(0);
        ListNode* curr = head;

        if(list1 == NULL && list2 == NULL){
            return list1;
        }

        while(list1 != NULL && list2 != NULL){
            ListNode* temp = new ListNode();

            if(list1->val < list2->val){
                temp->val = list1->val;
                curr->next = temp;
                curr = temp;
                
                list1 = list1->next;
            }
            else if(list1->val > list2->val){
                temp->val = list2->val;
                curr->next = temp;
                curr = temp;
                
                list2 = list2->next;
            }
            else{
                ListNode* temp2 = new ListNode();

                temp->val = list1->val;
                curr->next = temp;
                curr = temp;
                
                list1 = list1->next;

                temp2->val = list2->val;
                curr->next = temp2;
                curr = temp2;
                
                list2 = list2->next;
                // delete temp2;
            }
            // delete temp;

        }
        while(list1 != NULL){
            ListNode* temp = new ListNode();

            temp->val = list1->val;
            curr->next = temp;
            curr = temp;
            
            list1 = list1->next;

            // delete temp;
        }
        while(list2 != NULL){
            ListNode* temp = new ListNode();

            temp->val = list2->val;
            curr->next = temp;
            curr = temp;
            
            list2 = list2->next;  

            // delete temp;          
        }

        return head->next;
    }
};