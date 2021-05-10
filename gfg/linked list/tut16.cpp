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

Node *revRec(Node *curr, Node *prev)
{
    if (curr == NULL)
        return prev;
    Node *next = curr->next;
    curr->next = prev;
    return revRec(next, curr);
}