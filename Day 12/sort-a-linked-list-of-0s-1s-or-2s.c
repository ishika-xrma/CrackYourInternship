void SortList(ListNode* head){
    int count[3] = { 0, 0, 0 };
    ListNode* temp = head;

    while (temp != NULL) {
        count[temp->data] += 1;
        temp = temp->next;
    }

    int i = 0;
    temp = head;

    while (temp != NULL) {
        if (count[i] == 0)
            i += 1;
        else {
            temp->data = i;
            count[i] -= 1;
            temp = temp->next;
        }
    }
}
