// Last updated: 27/08/2026, 20:42:12
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseList(ListNode* head) {
14        ListNode* prev = NULL;
15
16        while(head != NULL){
17            ListNode* temp = head->next;
18            head->next = prev;
19            prev = head;
20            head = temp;
21        }
22        return prev;
23    }
24};