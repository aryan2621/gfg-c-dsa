// Linked List Implementation in c++;

// ______     _______         ___________
// |  | |     |    | |       |     |     |
// |10|-|---_>|  5 |-|------>|  30 |null |
// |__|_|     |____|_|       |_____|_____|
// Head
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

int main()
{
    // Node *head = new Node(10);
    // Node *temp1 = new Node(20);
    // Node *temp2 = new Node(30);
    // head->next = temp1;
    // temp1->next = temp2;

    // shortcut
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    head->next->next = new Node(30);

    return 0;
}