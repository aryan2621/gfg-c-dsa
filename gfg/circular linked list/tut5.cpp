// Delete head of CLL

// naive Solution;

/* Node *deleteHead(Node *head){
  if(head==NULL)   return NULL;
  if(head->next==head){
      delete head;
      return NULL;
  }
 Node *curr =head;
 while(curr->next!=head){
     curr=curr->head;
 }
 curr->next=head->next;
 delete head;
 return (curr->next);
}
*/
// Time Complexity -> theta n

// Efficient method

/*
Node *deleteHead(Node *head){
    if(head==NULL) return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    head->data =head->next->data;
    Node *temp =head-> next;
    head->next =head->next->next;
    delete(temp);
    return head;
}

*/