// Circular DLL;

// ______________________________
// |                              |
// |>_______        _______       |
//   |      |<-----|       |------|
//   |  10  |      |   20  |
// |-|______|----->|_______|------|
// |                              |
// |______________________________|

// Previous of head is last node;
// Next of last node is head;

// we can get all the advantages of circular + doubly linked list;

// Insert at the head;

/*
Node *temp=new Node(x);
if(head ==NULL){
    temp->next=temp;
    temp->prev=temp;
    return temp;
}
temp->prev=head->prev;
temp->next=head;
head->prev->next=temp;
head->prev=temp;
return temp;

*/

// Insert at the End;

/*
Node *temp=new Node(x);
if(head ==NULL){
    temp->next=temp;
    temp->prev=temp;
    return temp;
}
temp->prev=head->prev;
temp->next=head;
return temp;
*/