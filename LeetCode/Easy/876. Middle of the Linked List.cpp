 ListNode* middleNode(ListNode* head) {
        if(head == nullptr) return nullptr;
        int no = 0;
        ListNode* count = head;
        while(count != nullptr)
        {
            no++;
            count = count -> next;
        }
        no = (no / 2) ;
        while(no--)
        {
            head = head -> next;
        }
        return head;  
    }
