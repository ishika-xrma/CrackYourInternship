/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if(head==NULL || head->next==NULL){
        return true;
    }
    struct ListNode*slow=head;
    struct ListNode*fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    struct ListNode*current=slow->next;
    struct ListNode*prev=NULL;
    struct ListNode*ahead=head;
    while(current!=NULL){
        ahead=current->next;
        current->next=prev;
        prev=current;
        current=ahead;
    }
    struct ListNode*firsthalf=head;
    struct ListNode*secondhalf=prev;
    while(secondhalf!=NULL){
        if(firsthalf->val!=secondhalf->val){
            return false;
        }
        firsthalf=firsthalf->next;
        secondhalf=secondhalf->next;
    }
    return true;
}