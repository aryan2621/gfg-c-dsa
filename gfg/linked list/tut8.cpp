// Delete the first element in single linked list;

// i-> 10 ->20-> 30->40;
// o-> 20->30->40

// i-> head=NULL
// o->head=NULL;

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

Node *deleteHead(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        Node *temp = head->next;
        delete head;
        return temp;
    }
}