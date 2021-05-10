// Insert at the begining

// 10->20->30
// data =5;
// 5->10->20->30

// head=NULL;
// 5
// 5
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

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    if (head != NULL)
    {
        head->prev = temp;
    }
    return temp;
}