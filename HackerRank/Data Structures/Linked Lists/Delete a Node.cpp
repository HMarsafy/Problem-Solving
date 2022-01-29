SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
      
      SinglyLinkedListNode* d ;
      SinglyLinkedListNode* itr = llist ;
      if( position == 0 )
      {
          d = llist->next;
          delete llist;
          return d;
      }
      int count = 1 ;
      while(count != position)
      {
          count++;
          itr = itr -> next;
      }
      d = itr->next;
      itr -> next = d->next;
      delete d;
      return llist;
}
