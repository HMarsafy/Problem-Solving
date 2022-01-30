SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    if(llist == nullptr) return nullptr;
    SinglyLinkedListNode* front = llist->next;
    SinglyLinkedListNode* back = nullptr;
    while(llist->next != nullptr)
    {
        llist->next = back;
        back = llist;
        llist = front;
        front = front->next;   
    }
    llist->next = back;
    return llist;
}
