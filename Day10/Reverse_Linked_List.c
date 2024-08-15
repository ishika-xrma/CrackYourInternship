/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(head==NULL || head->next==NULL){
        return head;
    }
    struct ListNode*current=head;
    struct ListNode*prev=NULL;
    struct ListNode*ahead=head->next;
    while(current!=NULL){
        ahead=current->next;
        current->next=prev;
        prev=current;
        current=ahead;
    }
    return prev;
}