 int getDecimalValue(ListNode* head) {
        ListNode * ptr = head;
        int no_of_nodes = 0;
        while(ptr != nullptr)
        {
            no_of_nodes++;
            ptr = ptr -> next;        
        }
        int power = no_of_nodes - 1 ;
        int number = 0;
        while(head != nullptr)
        {
          if(head -> val == 1 )number += pow(2,power);
          power --;
          head = head ->next;
        }
        return number;
    }
