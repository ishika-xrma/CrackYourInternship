/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    if(head==NULL || head->next==NULL ||left==right||right<left){
        return head;
    }
    struct ListNode dummy;
    dummy.next=head;
    struct ListNode*prev=&dummy;
    for(int i=1;i<left;i++){
        if(prev==NULL|| prev->next==NULL){
            return head;
        }
        prev=prev->next;
    }
    struct ListNode*temp=prev;
    struct ListNode*current=prev->next;
    struct ListNode*ahead=current->next;
    for(int i=left;i<=right;i++){
        ahead=current->next;
        current->next=prev;
        prev=current;
        current=ahead;
    }
    temp->next->next=current;
    temp->next=prev;
if(left==1){
    head=prev;
}
return head;
}