// Search in Linked List

// i 10-> 5-> 20->15
// x=20
// o->3

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
// iterative approach;
int search(Node *head, int x)
{
    int pos = 1;
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == x)
        {
            return pos;
        }
        else
        {
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}

// recursive approach
int search2(Node *head, int x)
{
    if (head == NULL)
        return -1;
    if (head->data == x)
        return 1;
    else
    {
        int res = search2(head->next, x);
        if (res == -1)
            return -1;
        else
            return res + 1;
    }
}

// Time Complexity->O(n)(search + search2)