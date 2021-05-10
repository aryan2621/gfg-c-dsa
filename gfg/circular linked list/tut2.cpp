// Traversal in CLL

// 10->20->30->
// |___________|

// 10 20 30

// 10
// 10

// NULL
//:

// Method -1

/*
void printList(Node *head)
{
    if (head == NULL)
        return;
    cout << head->data << " ";
    for (Node *p = head->next; p != head; p = p->next)
    {
        cout << p->data;
    }
}

*/

/*
void printList(Node *head){
    if(head==NULL) return ;
    Node * p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }
    while(p!=head);
}
*/