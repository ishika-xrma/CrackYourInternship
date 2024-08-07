/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* create(int data){
     struct ListNode *newnode=(struct ListNode *)(malloc(sizeof(struct ListNode)));
     newnode->val=data;
     newnode->next=NULL;
     return newnode;
 }
 void insertatend(struct ListNode** list1, int data){
     if(*list1==NULL){
         *list1=create(data);
         return;
     }
     struct ListNode* tail=*list1;
     while(tail->next !=NULL){
         tail=tail->next;
     }
     struct ListNode*newnode=create(data);
     tail->next=newnode;
 }
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) { 
    struct ListNode *list3=NULL;
    while(list1!=NULL && list2!=NULL ){
        if(list1->val<list2->val){
            insertatend(&list3,list1->val);
            list1=list1->next;
        }
        else{
            insertatend(&list3,list2->val);
            list2=list2->next;
        }
    }
    while(list1!=NULL){
        insertatend(&list3,list1->val);
        list1=list1->next;
    }
    while(list2!=NULL){
        insertatend(&list3,list2->val);
        list2=list2->next;
    }
    return list3;
    
}