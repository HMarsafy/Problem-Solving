SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    
    SinglyLinkedListNode * new_node = new SinglyLinkedListNode(data);
    if(llist == nullptr) return new_node;
    SinglyLinkedListNode * itr = llist;
    if(position == 0)
    {
        new_node->next = llist;
        return new_node;
    }
    int count = 1;
    while(count != position)
    {
        count++;
        itr = itr ->next;
    }
    new_node ->next = itr->next;
    itr->next = new_node;
    return llist;

}
