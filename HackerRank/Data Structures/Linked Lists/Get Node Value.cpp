int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    
    SinglyLinkedListNode* itr = llist;
    int count = 0 ;
    while(itr != nullptr)
    {
        count++;
        itr = itr -> next;
    }
    int pos = count - positionFromTail - 1 ;
    while(pos--)
    {
        llist = llist -> next;
    }
    return llist -> data;
}
