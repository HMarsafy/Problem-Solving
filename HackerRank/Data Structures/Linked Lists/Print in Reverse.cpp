void reversePrint(SinglyLinkedListNode* llist) {
      
      if(llist == nullptr) return ;
      
      reversePrint(llist -> next);
      cout<<llist->data<<endl;
  
  ////////////////////////////////////////////////////////Another SOLUTION //////////////////////////////////////
      vector<int> out;
      while(llist !=nullptr)
      {
          out.insert(out.begin() , llist->data);
          llist = llist -> next;
      }
      for(int i = 0 ; i<out.size() ; i++)
      {
          cout<<out[i]<<endl;
      }
}
