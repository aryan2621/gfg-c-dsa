// Insert the data item at the given position

// i-> 10 ->30->50->70
// pos=2 data->20;
// o->10->20->30->50->70

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

Node *deleteatPos(Node *head, int pos, int data)
{
    Node *temp = new Node(data);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for (int i = 1; i < pos - 2 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
        return head;
    temp->next = curr->next;
    curr->next = temp;
    return head;
}