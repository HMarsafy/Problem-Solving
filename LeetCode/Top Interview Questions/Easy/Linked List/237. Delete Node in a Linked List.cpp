    void deleteNode(ListNode* node) {
        node -> val = (node ->next) -> val;
        ListNode* del = node -> next;
        node-> next = del ->next;
        delete(del);
    }
