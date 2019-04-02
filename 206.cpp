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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* node=head->next;
        head->next=NULL;
        ListNode* after=node->next;
        while(after!=NULL){
            
            node->next=head;
            head=node;
            node=after;
            after=after->next;
        }
        node->next=head;
    return node;
    }
};
