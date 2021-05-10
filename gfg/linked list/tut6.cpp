// insert at the begin of the Linked List

// 10->4 ->30
// x=30
// 30-> 10-> 4->30;

// NULL
// x=5
// 5-> NULL

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

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}
int main()
{
    Node *head = NULL;
    head = insertBegin(head, 30);
    head = insertBegin(head, 60);
    head = insertBegin(head, 70);
    return 0;
}

// in insert at begin the order is store is just reverse

// Time Comlexity ->O(1)