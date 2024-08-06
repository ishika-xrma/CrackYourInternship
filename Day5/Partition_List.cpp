/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void insertatend(struct ListNode** head, struct ListNode** tail, int data) {
    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->val = data;
    newnode->next = NULL;

    if (*head == NULL) {
        *head = newnode;
        *tail = newnode;
    } else {
        (*tail)->next = newnode;
        *tail = newnode;
    }
}
struct ListNode* partition(struct ListNode* head, int x) {
    if(head==NULL || head->next==NULL){
        return head;
    }
    struct ListNode*current=head;
    struct ListNode*less=NULL;
    struct ListNode*lessend=NULL;
    struct ListNode*more=NULL;
    struct ListNode*moreend=NULL;
    while(current!=NULL){
        if(current->val<x){
            insertatend(&less,&lessend,current->val);
        }
        if(current->val>x || current->val==x){
            insertatend(&more,&moreend,current->val);
        }
        current=current->next;
    }
    if(lessend!=NULL){
        lessend->next=more;
        return less;
    }
    else{
    return more;
    }
}