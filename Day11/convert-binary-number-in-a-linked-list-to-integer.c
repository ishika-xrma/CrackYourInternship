/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int result;
    struct ListNode*temp=head;
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    n--;
    temp=head;
    while(temp!=NULL){
        result+=temp->val*pow(2,n);
        n--;
        temp=temp->next;
    }
    return result;
}