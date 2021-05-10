// Recursive a linked List (Recusrsive method);

// 10->20->30->40
// 40->30->20->10

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

Node *revRec(Node *head)
{
    if (head == NULL)
        return;
    if (head->next == NULL)
        return head;
    Node *rest_head = revRec(head->next);
    Node *res_tail = head->next;
    res_tail->next = head;
    head->next = NULL;
    return rest_head;
}