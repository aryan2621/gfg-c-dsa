// Sorted Insert in the Linked List;

// i-> 10->20->30->40
// x=25
// o->10->20->25->30->40

#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

Node *sortedInsert(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    if (x < head->data)
    {
        temp->next = head;
        return head;
    }
    Node *curr = head;
    while (curr->next != NULL && curr->next->data < x)
    {
        curr = curr->next;
    }
    temp->next = curr->next; // -1
    curr->next = temp;       //-2
    return head;
}

// make sure that -1 is come before the -2
// second otherwise the one linked list will get loose and you will finished with pointing to ur own;
// Time Complexity ->theta (pos)