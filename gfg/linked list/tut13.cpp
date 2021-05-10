// i-> 10->20->30->40->50->
// n=2
// 40

// 10->-20->30->
// n=3
// 10

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
// Method 1-> using the length of linked list;

void printFromTheEnd(Node *head, int n)
{
    int len = 0;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        len++;
    }
    if (len < n)
    {
        return;
    }
    Node *curr = head;
    for (int i = 1; i < len - n + 1; i++)
    {
        curr = curr->next;
    }
    cout << curr->data << " ";
}

// Method ->2 w/o finding the length of Linked List;

// step-1 Move first two positions ahead;
// step-2 start second  pointer from head;
// step-3 Move both first and second at the same speed .When first pointer reaches the NULL the second pointer
// reaches to the required position

// Method -2
void printEnd(Node *head, int n)
{
    if (head == NULL)
        return;
    Node *first = head;
    for (int i = 0; i < n; i++)
    {
        if (first == NULL)
            return;
        first = first->next;
    }
    Node *second = head;
    while (first != NULL)
    {
        second = second->next;
        first = first->next;
    }
    cout << second->data << " ";
}