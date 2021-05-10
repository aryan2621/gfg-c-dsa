// Reverse a DDL;
// 10->20->30->40;
// 40->30->20->10

// just swap the previous and next of each and every node

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

Node *reverseDll(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    while (curr != head)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev;
}