SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* nod = new SinglyLinkedListNode(data);
    if(head == nullptr) return nod;
    SinglyLinkedListNode* itr = head;
    while((itr->next) != nullptr)
    {
        itr = itr->next;
    }
    itr->next = nod;
    return head;

}
