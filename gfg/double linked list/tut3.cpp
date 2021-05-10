// Insert at the End of DLL;

// 10->20->30;
// data =40;
// 10->20->30->40

// NULL;
// 40
// 40

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

Node *insertEnd(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}