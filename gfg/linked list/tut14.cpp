// Reverse the linked list

// 10->20->30->40
// 40->30->20->10

// 10
// 10

// NULL
// NULL

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

// Naive method;

Node *reverseList(Node *head)
{
    vector<int> arr;

    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        arr.push_back(curr->data);
    }

    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        curr->data = arr.back();
        arr.pop_back();
    }
    return head;
}

// Efiicient Method;

Node *reverseList2(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}


// Big O(n)
// Big O(1)