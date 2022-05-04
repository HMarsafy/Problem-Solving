 ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return nullptr;
        vector<int> ans;
        while(head != nullptr)
        {
            ans.push_back(head -> val);
            head = head -> next;
        }
        reverse(ans.begin() , ans.end());
        int size = ans.size();
        int index = 1 ;
        ListNode* new_head = new ListNode(ans[0]);
        ListNode* loop = new_head;
        while(--size)
        {
            ListNode* temp = new ListNode(ans[index++]);
            loop->next = temp;
            loop = temp;
        }
        loop -> next = nullptr;
        return new_head;
    }
