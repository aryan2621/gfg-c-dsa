// Recursive Display of Linked List;

// transverse of single linked list using recursion;

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
void printHead(Node *head)
{
    if (head == NULL)
        return;
    cout << head->data << " ";
    printHead(head->next);
}

// Time Complexity -> O(n)
// Auxiliary space ->O(n)