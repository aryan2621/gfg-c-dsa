// Delete at the  End of DLL;

// i-> 10->20 ->30
// o-> 10->20

// 10
// :

// head or NULL;
// :

#include <iostream>
#include <bits/stdc++.h>

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

Node *deleteLast(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr;
    return head;
}
// theta n(Time Complexity);