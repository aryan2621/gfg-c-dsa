// Delete kth Node from a circular Linked List

// 10->20->30
// k=2
// 10->30

// 10->20->30->40
// k=1
// 20->30->40

// Assumption n>=k;
/*
Node *deletekth(Node *head,int k){
    if(head==NULL) return head;
    if(k==1){
        return deleteHead(head);
    }
    Node *curr =head;
    for(int i=0;i<k-2;i++){
        curr=curr->next;
    }
    Node *temp =curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
}
*/
