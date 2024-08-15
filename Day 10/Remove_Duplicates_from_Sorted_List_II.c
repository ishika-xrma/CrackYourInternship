struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Handle duplicates at the beginning
    while (head != NULL && head->next != NULL && head->val == head->next->val) {
        while (head->next != NULL && head->val == head->next->val) {
            head = head->next;
        }
        head = head->next;
    }

    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode* temp = head;
    struct ListNode* temp1 = head->next;

    while (temp1 != NULL) {
        if (temp1->next != NULL && temp1->val == temp1->next->val) {
            while (temp1->next != NULL && temp1->val == temp1->next->val) {
                temp1 = temp1->next;
            }
            temp->next = temp1->next;
            temp1->next = NULL;
            temp1 = temp->next;
        } else {
            temp = temp->next;
            if (temp1 != NULL) {
                temp1 = temp1->next;
            }
        }
    }

    return head;
}