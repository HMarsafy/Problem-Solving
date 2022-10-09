int getDecimalValue(ListNode* head) {
        int out = 0 ;
        string no = "";
        while(head != nullptr)
        {
            if(head->val == 1) no += '1' ;
            else no += '0';
            head = head -> next;
        }
        int power = 0 ;
        for(int i = no.size() -1 ; i >= 0 ; i--)
        {
            if(no[i] == '1') out += pow(2,power);
            power++;
        }
        return out;
    }
