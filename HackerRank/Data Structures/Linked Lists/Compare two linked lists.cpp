bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
   if(head1 == nullptr && head2 == nullptr) return true;
   while(head1 != nullptr && head2 != nullptr)
   {
    if(head1 ->data != head2 ->data) return 0;
    head1 = head1 ->next;
    head2 = head2 -> next;
   }
   if(head1 == head2) return 1;
   return 0;
}
