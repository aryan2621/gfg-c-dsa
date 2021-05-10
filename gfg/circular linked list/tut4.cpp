// Insert at the end of Circular Linked List;

// i-> 10->20->30
// x=15
// 10 -> 20->30->15

// head =NULL or NULL
// x=10
// 10

// 10
// x=15
// 10->15;

// naive solution

/*
Node *insertEnd(Node *head,int x){
    Node *temp =new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
Node *curr =head;
while(curr->next!=NULL){
    curr=curr->next;
}
curr->next=temp;
temp->next=head;
return head;
    }
}
*/


/*
Efficient soln;
Node *insertEnd(Node *head,int x){
    Node *temp =new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t=temp->data;
        temp->data=head->data;
        head->data=t;
        return head;
    }
    }

*/