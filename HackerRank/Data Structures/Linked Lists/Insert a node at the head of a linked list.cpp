SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {

SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
if(llist == nullptr) return new_node;
new_node->next = llist;
return new_node;
}
