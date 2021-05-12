// Linked List Implementation;

// Insert and delete from same end;
// In case of single linked list its possible always from the head only;
// cant delete from the last node,even if you maintain tail pointer;
// We always delete insert and delete from head;

// Intially head=NULL;

/*
push(x){
    temp =new Node(x);
    temp-> next=head;
    head=temp;

pop(){
    if(head==NULL){
        return ;
    }
    res =head->data;
    temp=head;
    head=head->next;
    delete temp;
    return res;
}
}
*/ 

// Time Complexity->O(1)