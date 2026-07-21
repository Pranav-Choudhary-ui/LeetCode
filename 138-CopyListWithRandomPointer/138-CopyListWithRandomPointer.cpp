// Last updated: 21/07/2026, 09:07:31
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL){
            return NULL;
        }

        Node* head1 = head;
        unordered_map<Node*, Node*> node;

        while(head1 != NULL){
            node[head1] = new Node(head1->val);
            head1 = head1->next;
        }


        Node* list = head;
        while(list != NULL){
            node[list]->next = node[list->next];
            node[list]->random = node[list->random];

            list = list->next;
        }

        return node[head];
    }
};