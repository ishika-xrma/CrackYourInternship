/*struct ListNode {
int val;
struct ListNode *next;
};
*/
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if(head==NULL || (head->next==NULL && n==1)){
        return NULL;
    }
    if(head->next==NULL && n!=1){
        return head;
    }
    struct ListNode *temp = head;
    int count=1;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    temp=head;
    int i=1;
    if(count==1){
        return head;
    }
    if(count==n){
        temp=head->next;
        head->next==NULL;
        free(head);
        return temp;
    }
    while(temp!=NULL && i<count-n && count!=0){
        temp=temp->next;
        i++;
    }
    struct ListNode *temp2 = temp->next;
    temp->next=temp2->next;
    free(temp2);
    return head;
}