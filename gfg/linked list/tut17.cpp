// Removing the duplicates from sorted linked list;

// 10->20->20->30->30->30
// 10->20->30

#include <iostream>
#include <bits/stdc++.h>

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

void removeDup(Node *head)
{
    Node *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete (temp);
        }
        else
        {
            curr = curr->next;
        }
    }
}