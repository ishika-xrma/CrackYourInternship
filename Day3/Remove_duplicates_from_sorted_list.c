/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head==NULL || head->next==NULL){
        return head;
    }
    int count=0;
    struct ListNode*temp=head;
    while(temp->next!=NULL){
        if(temp->val!=temp->next->val){
            temp=temp->next;
        }
        else{
            if(temp->val==temp->next->val){
                temp->next=temp->next->next;
            }
        }
    }
    return head;
}