// Insert ate the head of the Circular Linked List;

// i-> 10->30->20
// x =15
// 15->10->30->20

// Naive soln;

/*
Node *insertBegin(Node *head,int x){
    Node *temp =new Node(x);
    if(head==NULL)
    temp->next=temp;
    else{
        Node *curr =head;
        while(curr->next!=head){
            curr=curr->next;
        }
        curr->next=temp;
        temp->next =head;
    }
    return temp;
}
Time Complexity ->O(n);
*/

/*

Efficient Method

Node *insertBegin(Node *head,int int x){
    Node *temp new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        temp->next=head->temp;
        head->next =temp;
        int t=head->data;
        head->data =temp->data;
        temp->data =t;
        return head;
    }
}
*/