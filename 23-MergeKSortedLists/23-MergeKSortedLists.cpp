// Last updated: 21/07/2026, 09:08:18
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        map<int, int> freq;

        for (ListNode* head : lists) {
            while (head != NULL) {
                freq[head->val]++;
                head = head->next;
            }
        }

        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        for (auto& [val, count] : freq) {
            for (int i = 0; i < count; i++) {
                current->next = new ListNode(val);
                current = current->next;
            }
        }

        return dummy->next;
    }
};