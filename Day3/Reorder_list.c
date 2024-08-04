/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void reorderList(struct ListNode* head) {
    if(head==NULL || head->next==NULL){
        return;
    }
    struct ListNode*slow=head;
    struct ListNode*prevslow=NULL;
    struct ListNode*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        prevslow=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    struct ListNode*prev=NULL;
    struct ListNode*current=slow;
    struct ListNode*ahead;
    while(current!=NULL){
        ahead=current->next;
        current->next=prev;
        prev=current;
        current=ahead;
    }
    current=head;
    struct ListNode*half=prev;

    while(half!=NULL){
    struct ListNode*curnext=current->next;
    struct ListNode*halfnext=half->next;
        current->next=half;
        half->next=curnext;
        current=curnext;
        half=halfnext;
    }
    if(current!=NULL){
        current->next=NULL;
    }
    
}