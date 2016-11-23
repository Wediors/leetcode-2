    int i = 0;
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if( head == NULL ) return NULL;
        head->next = removeNthFromEnd( head->next, n );
        i++; // start counting from the end
        return (i == n) ? head->next : head;
    }
