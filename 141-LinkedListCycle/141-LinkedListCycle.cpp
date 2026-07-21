// Last updated: 21/07/2026, 09:07:30
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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, int> address;

        ListNode* temp = head;
        int i = 0;
        while(temp != NULL){
            if(address.count(temp)){
                return true;
            }
            address[temp] = i++;
            temp = temp->next;
        }
        return false;
    }
};