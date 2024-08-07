/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* add(struct ListNode* l1, struct ListNode* l2,int carry) {
    if(l1==NULL && l2==NULL & carry==0){
        return NULL;
    }
    int sum=carry;
    sum+=l1?l1->val:0;
    sum+=l2?l2->val:0;
    struct ListNode*result=(struct ListNode*)malloc(sizeof(struct ListNode));
    result->val=sum%10;
    carry=sum/10;
    if(l1!=NULL){
        l1=l1->next;
    }
    if(l2!=NULL){
        l2=l2->next;
    }
    result->next=add(l1,l2,carry);
    return result;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    return add(l1,l2,0);
}
