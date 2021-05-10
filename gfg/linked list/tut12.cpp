//  Middle of a linked list

// 10->5->20->15->25
// 20

// 10
// 10

// NULL
// :

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

void printMiddle(Node *head)
{
    if (head == NULL)
        return;
    int count = 0;
    Node *curr;
    for (curr = head; curr != NULL; curr = curr->next)
    {
        count++;
    }
    curr = head;
    for (int i = 0; i < count / 2; i++)
    {
        curr = curr->next;
    }
    cout << curr->data;
}

//Efiicient approach

void printMiddle(Node *head)
{
    if (head == NULL)
        return;
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data;
}