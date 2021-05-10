// Delete head of DLL

// 10->20->30
// 20->30

// 10
//

//  head =null or NULL

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

Node *deleteHead(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete (head);
        return NULL;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return head;
    }
}